// ამოცანა: "ავტომატური დიაპაზონის სკანერი"

// ამ ამოცანაში ჩვენ გავაერთიანებთ შენს ნასწავლ for ციკლს და სოკეტებს.
// პირობები:

//     მონაცემების შეყვანა:

//         პროგრამამ მომხმარებელს უნდა სთხოვოს მხოლოდ IP მისამართი.

//         პორტის ნომერს მომხმარებელს აღარ ვეკითხებით.

//     ავტომატიზაცია (for ციკლი):

//         შექმენი ციკლი, რომელიც გადაურბენს პორტებს 20-დან 30-მდე.

//         ციკლის ყოველ ბიჯზე (Iteration):

//             უნდა შეიქმნას ახალი სოკეტი.

//             server.sin_port უნდა გაუტოლდეს ციკლის მიმდინარე მნიშვნელობას (გამოიყენე htons(i)).

//             სცადე დაკავშირება (connect).

//     ჭკვიანი ბეჭდვა:

//         ეკრანზე დაბეჭდე მხოლოდ ის პორტები, რომლებიც ღიაა.

//         დაკეტილ პორტებზე პროგრამამ არაფერი არ უნდა დაწეროს (რომ ეკრანი არ აჭრელდეს).

//     რესურსების მართვა:

//         ძალიან მნიშვნელოვანი: ციკლის შიგნით, ყოველი მცდელობის შემდეგ, აუცილებლად დახურე სოკეტი closesocket(s)-ით, წინააღმდეგ შემთხვევაში კომპიუტერს "სუნთქვა" გაუჭირდება.
#include <stdio.h>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsa;
    char user_ip[20];
    int start_port, end_port;

    if (WSAStartup(MAKEWORD(2,2), &wsa) != 0) return 1;

    printf("Sheiyvane IP: ");
    scanf("%s", user_ip);
    printf("Saçyisi porti: ");
    scanf("%d", &start_port);
    printf("Saboloo porti: ");
    scanf("%d", &end_port);

    printf("\nScanning %s...\n\n", user_ip);

    for (int i = start_port; i <= end_port; i++) {
        SOCKET s = socket(AF_INET, SOCK_STREAM, 0);
        
        struct sockaddr_in server;
        server.sin_addr.s_addr = inet_addr(user_ip);
        server.sin_family = AF_INET;
        server.sin_port = htons(i);

        unsigned long mode = 1; 
        ioctlsocket(s, FIONBIO, &mode); 

        connect(s, (struct sockaddr *)&server, sizeof(server));

        struct timeval timeout;
        timeout.tv_sec = 0;
        timeout.tv_usec = 200000; 

        fd_set writefds;
        FD_ZERO(&writefds);
        FD_SET(s, &writefds);

        if (select(0, NULL, &writefds, NULL, &timeout) > 0) {
            printf("[+] Port %d is OPEN\n", i);
        } else {
            printf("Checking %d...\r", i); 
            fflush(stdout);
        }

        closesocket(s);
    }

    printf("\n\nScan completed!\n");
    WSACleanup();
    return 0;
}
