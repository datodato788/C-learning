// მომხმარებელი შეიყვანს IBAN-ს (string).

// პროგრამამ უნდა შეამოწმოს:

// სიგრძე ზუსტად 22 სიმბოლოა

// პირველი ორი სიმბოლო არის GE

// შემდეგი ორი არის ციფრი (control digits)

// დანარჩენი სიმბოლოები არის მხოლოდ ციფრები ან დიდი ასოები

// აკმაყოფილებს თუ არა MOD-97 checksum წესს

// Checksum Algorithm (MOD-97) ---------
// ნაბიჯი 1

// აიღე პირველი 4 სიმბოლო და გადაიტანე ბოლოში

// GE29XXXX → XXXXGE29
// ნაბიჯი 2

// ასოები გადააქციე რიცხვებად:

// A = 10
// B = 11
// ...
// Z = 35

// მაგალითად:

// G = 16
// E = 14

// ნაბიჯი 3

// მიღებული გიგანტური რიცხვი გაყავი 97-ზე

// number % 97
// ნაბიჯი 4

// თუ შედეგი == 1
// → Valid IBAN

// სხვა შემთხვევაში
// → Invalid IBAN

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char IBAN[100];
    char rotated[50];
    char converted[200];

    printf("Enter IBAN: ");
    scanf("%s", IBAN);

    int size = strlen(IBAN);

    if (size != 22)
    {
        printf("Invalid IBAN (wrong length)\n");
        return 0;
    }

    if (IBAN[0] != 'G' || IBAN[1] != 'E')
    {
        printf("Invalid IBAN (must start with GE)\n");
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (!isdigit(IBAN[i]) && !isupper(IBAN[i]))
        {
            printf("Invalid IBAN (invalid characters)\n");
            return 0;
        }
    }

    strcpy(rotated, IBAN + 4);
    strncat(rotated, IBAN, 4);

    converted[0] = '\0';

    for (int i = 0; i < strlen(rotated); i++)
    {
        if (isalpha(rotated[i]))
        {
            char temp[3];
            sprintf(temp, "%d", rotated[i] - 'A' + 10);
            strcat(converted, temp);
        }
        else
        {
            int len = strlen(converted);
            converted[len] = rotated[i];
            converted[len + 1] = '\0';
        }
    }

    long long remainder = 0;

    for (int i = 0; i < strlen(converted); i++)
    {
        remainder = (remainder * 10 + (converted[i] - '0')) % 97;
    }

    if (remainder == 1)
        printf("Valid IBAN\n");
    else
        printf("Invalid IBAN\n");

    return 0;
}