// ამოცანა — Full Name Builder (strcpy და strncat გამოყენებით)

// მომხმარებელს სთხოვს შეიყვანოს:

// სახელი (First Name)

// გვარი (Last Name)

// პროგრამამ უნდა შექმნას ახალი string შემდეგი ფორმატით:

// Full Name: <FirstName> <LastName>

// შედეგი უნდა შეინახოს ერთ საერთო მასივში (result).

// მოთხოვნები ---

// გამოიყენე strcpy

// გამოიყენე strncat

// არ გამოიყენო sprintf

// არ გამოიყენო პირდაპირ printf("Full Name: %s %s", ...)

// შედეგი უნდა შეიქმნას მხოლოდ string ოპერაციებით

// არ დაგავიწყდეს \0 (null terminator)
#include <stdio.h>
#include <string.h>

int main()
{
    char firstname[40];
    char lastname[40];
    
    printf("Enter firstname: ");
    scanf("%s", firstname);
    printf("Enter lastname: ");
    scanf("%s", lastname);

    int size = strlen(firstname);
    int size1 = strlen(lastname);
    char result[100] = "Full Name: ";
    // strncat
    // და
    // strcat
    // strcat(destination, source);
    // ამათშორის განსხვავება ისარის რო strcat ბოლოში ამატებს პირდაპირ
    strncat(result,firstname, size); 
    strcat(result, " ");
    strncat(result,lastname, size1+1);


    
    printf("%s",result);
    
    return 0;

}
