//  Task — Password Strength Analyzer
//  Objective --

// დაწერე პროგრამა, რომელიც ამოწმებს პაროლის სიძლიერეს და განსაზღვრავს რამდენად უსაფრთხოა იგი.

//  Description --

// მომხმარებელმა უნდა შეიყვანოს პაროლი (string).

// პროგრამამ უნდა შეამოწმოს:
// 1 აქვს თუ არა მინიმუმ 8 სიმბოლო
// 2
// 3 შეიცავს თუ არა მინიმუმ ერთ დიდ ასოს (A–Z)
// 4 შეიცავს თუ არა მინიმუმ ერთ პატარა ასოს (a–z)
// 5 შეიცავს თუ არა მინიმუმ ერთ ციფრს (0–9)
// 6 შეიცავს თუ არა მინიმუმ ერთ სპეციალურ სიმბოლოს (!@#$%^&* და სხვ.)
// 7 არ შეიცავს თუ არა space-ს

// Output --

// პროგრამამ უნდა დაბეჭდოს:
// "Weak password"
// "Medium password"
// "Strong password"

// წესები:
// 1 თუ აკლია 2 ან მეტი მოთხოვნა → Weak
// 2 თუ აკლია მხოლოდ 1 მოთხოვნა → Medium
// 3 თუ აკლია არაფერი → Strong

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];
    int if8 = 0;
    int ifup = 0;
    int iflow = 0;
    int ifnum = 0;
    int space = 0;
    int symbol = 0;
    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    int size = strlen(password);

    if (size < 8)
    {
        if8 = 0;
    }
    else
    {
        if8 = 1;
    }
    for (size_t i = 0; i < size; i++)
    {
        if (isupper(password[i]))
        {
            ifup = 1;
        }
        if (islower(password[i]))
        {
            iflow = 1;
        }
        if (isspace(password[i]))
        {
            space = 1;
        }
        if (!isspace(password[i]) && !isalnum(password[i]))
        {
            symbol = 1;
        }
        if (isdigit(password[i]))
        {
            ifnum = 1;
        }
    }
    if (space == 1)
    {
        printf("\nincorect password. because you have space symbol");
    }
    else
    {
        int total = ifup + iflow + symbol + if8 + ifnum;

        if ((5 - total) >= 2)
        {
            printf("Weak password");
        }
        else if ((5 - total) == 1)
        {

            printf("Medium password");
        }
        else if ((5 - total) == 0)
        {

            printf("Strong password");
        }
    }
}
