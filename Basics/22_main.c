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
    char code[100]; 
    char rotated[30];
    printf("Enter your code: ");
    scanf("%s", IBAN);

    int size = strlen(IBAN);

    if (size == 22)
    {
        if (IBAN[0] == 'G' && IBAN[1] == 'E')
        {
            for (size_t i = 0; i < 4; i++)
            {
                code[i] = IBAN[i];
            }
            code[5] = '\0';
            code[0] = code[1] - 'A' + 10;
            code[1] = code[1] - 'A' + 10;

            for (size_t i = 0; i < strlen(code); i++)
            {
                for (size_t i = 0; i < size; i++)
                {
                    /* code */
                }
            }
        }

        else
        {
            printf("\ninvalid code");
        }
    }
    else
    {
        printf("\ninvalid code");
    }

    printf("Reverse: %d\n", code);
}