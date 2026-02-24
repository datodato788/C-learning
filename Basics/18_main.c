// ამოცანა — Increment Array

// დაწერე ფუნქცია:

// void incrementArray(int arr[], int size);

// ფუნქციამ უნდა:

// array-ის ყველა ელემენტი გაზარდოს 1-ით.

// გამოიყენე pointer-ები (*) ისე, რომ ძველი array შეიცვალოს.
#include <stdio.h>

void incrementArray(int arr[], int size){
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 1;
    }
    
    
    
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // sizeof(arr) = 24
    // sizeof(arr[0]) = 4   
    // 24 / 4 = 6   
        
    for (size_t i = 0; i < size ; i++)
    {
         printf("%d", arr[i]);
    };
    printf("\nnext line \n");
    
    incrementArray(arr, size);
    
    for (size_t i = 0; i < size ; i++)
    {
         printf("%d", arr[i]);
    };
    

    
}