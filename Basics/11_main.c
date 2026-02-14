// შექმენი ფაილი example.txt

// პროგრამაში გახსენ ფაილი მხოლოდ კითხვისთვის (read mode)

// წაიკითხე პირველი ხაზის ტექსტი და დაბეჭდე ეკრანზე

// დახურე ფაილი
#include <stdio.h>

int main()
{
    FILE *fp;       // ფაილის პოინტერი
    char line[100]; // ხაზი, რომ ფაილი ჩავწეროთ

    // 1. ფაილის გახსნა რიდინგისთვის ("r")
    fp = fopen("example.txt", "r");
    if (fp == NULL)
    {
        printf("ფაილი ვერ გაიხსნა!\n");
        return 1; // პროგრამის დასრულება თუ ვერ გაიხსნა
    }

    // 2. პირველი ხაზის წაკითხვა
    // if (fgets(line, sizeof(line), fp) != NULL) {
    //     printf("პირველი ხაზი: %s", line);
    // }
    // 3. მთლიანი ხაზის წაკითხვა
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    // 4. ფაილის დახურვა
    fclose(fp);

    return 0;
}
