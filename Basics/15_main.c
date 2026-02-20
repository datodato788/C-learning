// დაწერე ფუნქცია:

// void doubleValue(int* x);

// ფუნქციამ უნდა:

//  გააორმაგოს გადაცემული ცვლადის მნიშვნელო

#include <stdio.h>

void doubleValue(int* x) {
    *x = *x * 2;
}

int main() {
    int num = 5;

    doubleValue(&num);

    printf("%d", num);
}