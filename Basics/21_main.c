// National ID Validation (Custom Checksum Algorithm)
// Objective --

// დაწერე პროგრამა, რომელიც ამოწმებს 11-ნიშნა პირადი ნომერი სწორია თუ არა სპეციალური checksum ალგორითმით.

// Description --

// მომხმარებელი შეიყვანს 11-ნიშნა რიცხვს (string ფორმატში).

// პროგრამამ უნდა შეამოწმოს:

// შეიცავს თუ არა მხოლოდ ციფრებს

// არის თუ არა ზუსტად 11 სიმბოლო

// აკმაყოფილებს თუ არა checksum წესს (ქვემოთ)

// Checksum Algorithm Rules --

// მოცემულია 11 ციფრი:
// d1 d2 d3 d4 d5 d6 d7 d8 d9 d10 d11
// ნაბიჯი 1

// პირველი 10 ციფრი გაამრავლე შესაბამის წონებზე:

// წონები:
// 1 2 3 4 5 6 7 8 9 10

// ანუ:

// (d1×1) + (d2×2) + ... + (d10×10)
// ნაბიჯი 2

// მიღებული ჯამი გაყავი 11-ზე.

// ნაბიჯი 3

// აიღე ნაშთი:

// remainder = sum % 11
// ნაბიჯი 4

// თუ remainder == d11
// → პირადი ნომერი სწორია
// სხვა შემთხვევაში
// → არასწორია

// Output --

// თუ ნომერი სწორია:

// Valid ID

// თუ არასწორია:

// Invalid ID

// თუ ფორმატი არასწორია (არ არის 11 ციფრი ან შეიცავს ასოს):

// Invalid format

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int a;
    int b;
    char ID[100];
    int total = 0;
    int num = 0;

    printf("Enter your ID: ");
    scanf("%s", ID);
    int size = strlen(ID);
    if (size != 11)
    {
        printf("\nincorect ID");
        printf("%d", size);
    }
    else
    {

        for (size_t i = 0; i < 9; i++)
        {
            total = total + ((ID[i] - '0') * (i + 1));
        }
        a = ID[9] - '0';
        b = ID[10]- '0';
        total = total + (a  * 10);
        int num = (total % 11);
        printf("%d\n", num);
        if (num == b)
        {
            printf("valid ID");
        }
        else
        {
            printf("invalid ID");
        }
    }
}