// Task — Credit Card Validation (Luhn Algorithm)
// --- Objective

// დაწერე პროგრამა, რომელიც ამოწმებს საკრედიტო ბარათის ნომერი სწორია თუ არა Luhn Algorithm-ის გამოყენებით.

// --- Description

// საკრედიტო ბარათის ნომრები მოწმდება სპეციალური ალგორითმით, რომელსაც ეწოდება
// Luhn algorithm.

// შენი ამოცანაა:

// მომხმარებელმა შეიყვანოს ბარათის ნომერი (როგორც string ან long long).

// პროგრამამ გამოიყენოს Luhn Algorithm.

// დაბეჭდოს:

// "Valid card" თუ ნომერი სწორია

// "Invalid card" თუ ნომერი არასწორია

// --- Luhn Algorithm Rules

// დაიწყე მარჯვნიდან მეორე ციფრიდან.

// ყოველ მეორე ციფრს გაამრავლე 2-ზე.

// თუ მიღებული რიცხვი ორნიშნაა (მაგ: 14), შეკრიბე მისი ციფრები (1 + 4 = 5).

// ყველა ციფრის ჯამი შეკრიბე.

// თუ საბოლოო ჯამი იყოფა 10-ზე — ბარათი სწორია

#include <stdio.h>
#include <string.h>

int main()
{
    char card[100];
    printf("your card number: ");
    scanf("%s", &card);
    int size = strlen(card);
    int total = 0;
    int digit;
    for (int i = size - 2; i >= 0; i -= 2)
    {
        digit = card[i] - '0';
        digit *= 2;

        if (digit > 9)
        {
            digit = (digit / 10) + (digit % 10);
        }

        total += digit;
    }
    for (int i = size - 1; i >= 0; i -= 2)
    {
        total += card[i] - '0';
    }
    if (total % 10 == 0)
        printf("Valid card");
    else
        printf("Invalid card");
}
