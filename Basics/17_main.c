// ამოცანა — Swap ორი რიცხვი

// დაწერე ფუნქცია:

// void swap(int* a, int* b);

// ფუნქციამ უნდა:

// შეცვალოს ორი გადაცემული ცვლადის მნიშვნელობები ერთმანეთს შორის.
#include <stdio.h>

void swap(int* a, int*b){
    int l = *a;
    *a = *b;
    *b = l;

}
int main(){
    int a = 5; 
    int b =1;
    printf("before - A: %d B: %d\n", a,b );
    swap(&a,&b);
    printf("after - A: %d B: %d", a,b );

}