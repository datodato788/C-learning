// დაწერე ფუნქცია:

// void increment(int* x);

// ფუნქციამ უნდა:

//  გადაცემული ცვლადი გაზარდოს 1-ით.

#include <stdio.h>

void increment(int* x){
   *x = *x + 1;

}
int main(){
    int num = 6;

    printf("before %d\n", num);
    increment(&num);
    increment(&num);
    increment(&num);

    printf("after %d", num);
}