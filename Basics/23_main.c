#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Hello";
    char b[20];

    // source string-ს მთლიანად აკოპირებს destination-ში.
    strcpy(b, a);

    printf("%s", b);
}