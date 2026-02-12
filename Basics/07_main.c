#include <stdio.h>
#include <winsock2.h>


int main(){
    WSADATA wsa;
    WSAStartup(MAKEWORD(2,2), &wsa);

    char user_ip[20];
    int user_port;
    
    printf("შეიყვანე IP: ");
    scanf("%s", &user_ip);
    printf("შეიყვანე პორტი: ");
    scanf("%d", &user_port);

    struct sockaddr_in server;
    server.sin_addr.s_addr = inet_addr(user_ip);
    server.sin_port = htons(user_port);
    server.sin_family = AF_INET;

    printf("\nშეივსო წარმატებით!\n");
    SOCKET s = socket(AF_INET, SOCK_STREAM, 0);
    printf("ვცდილობ დაკავშირებას...\n");

    if (connect(s, (struct sockaddr *)&server, sizeof(server)) < 0) {
        printf("პორტი დაკეტილია!\n");
    } else {
        printf("პორტი ღიაა\n");
    }
    closesocket(s);
    WSACleanup();
    return 0;

}
