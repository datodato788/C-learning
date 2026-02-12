
// "დაწერე თამაში, სადაც კომპიუტერი იფიქრებს რიცხვს (1-100), 
// შენ უნდა გამოიცნო ის მინიშნებებით (მეტია/ნაკლებია)
//  და ბოლოს ეკრანზე გამოიტანო დახარჯული ცდების რაოდენობა."
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;
    int times = 0;
    
    printf("გამოიცანი რიცხვი 1-დან 100-მდე \n");
    printf("-------------------\n");


    do{
        printf("შენი რიცხვი: ");
        scanf("%d", &guess);

        if (guess > secret)
        {
            printf("შენ რიცხვზე ნაკლებია\n");
        }

        else if (guess < secret)
        {
             printf("შენ რიცხვზე მეტია\n");
        }
        times++;

        
    }while(guess != secret);

     printf("თქვენ გამოიცანით სწორი პასუხია %d. სულ დაგჭირდა %d-ცდა " , secret,times);
    return 0;

    
}