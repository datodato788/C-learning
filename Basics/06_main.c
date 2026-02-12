// შექმენი სტრუქტურა სახელით Port:

//     შიგნით უნდა ჰქონდეს მთელი რიცხვი number (პორტის ნომრისთვის).

//     შიგნით უნდა ჰქონდეს მთელი რიცხვი status (სადაც 1 ნიშნავს, რომ პორტი "ღიაა", ხოლო 0 — "დაკეტილია").

// Main ფუნქციაში:

//     შექმენი ამ სტრუქტურის ერთი ეგზემპლარი (ცვლადი).

//     scanf-ით სთხოვე მომხმარებელს, შეიყვანოს პორტის ნომერი (მაგ: 80) და სტატუსი (0 ან 1).

//     შეინახე ეს მონაცემები სტრუქტურაში.

// გამოიტანე პასუხი:

//     if-else-ით შეამოწმე სტრუქტურაში შენახული status და დაბეჭდე შესაბამისი ტექსტი.

//     მაგალითად: "პორტი 80 ამჟამად ღიაა" ან "პორტი 22 დაკეტილია".
#include <stdio.h>

struct Port
{
    int number;
    int status;
};

int main()
{
    int close;
    int chose_port;
    struct Port MyPort;
    MyPort.number = 80;
    MyPort.status = 1;
do
{
    printf("შეიყვანე პრტის ნომერი: ");
    scanf("%d", &chose_port);

    if (chose_port == MyPort.number)
    {
        if (MyPort.status == 1)
        {
            printf("%d-პორტი ღიაა\n", chose_port);
        }
        else
        {
            printf("%d-პორტი დაკეტილია\n", chose_port);
        }
    }
    else
    { 
        printf("%d პორტი არარსებობს \n", chose_port);
        close=1;

    }
    } while (close==1);
}
