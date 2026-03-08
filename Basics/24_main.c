#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Hello ";
    char b[] = "World";

    // destination	სად ვამატებთ
    // source	რომელი ტექსტიდან ვამატებთ
    // n
    // strncat(destination, source, n);
    
    strncat(a, b, 5);

    printf("%s", a);
}