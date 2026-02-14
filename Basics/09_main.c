#include <stdio.h>

int main(){
    char text[10];
    printf("ტექსტი: ");
    scanf("%s",text);
    printf("%s",text);  // ტექსტს როცა ურევია space ის წყვეთს მშაობას მაგალთად თუ ტექსტი ჩავწერეთ 'sadas dsada' გამოიტანს მარტო "sadas" 

    char text1[10]; // ცოტა გავზარდოთ ზომა, რომ მეტი დაეტიოს
    printf("ტექსტი (fgets-ით): ");
    // fgets(სად, რამდენი, საიდან)
    // stdin ნიშნავს კლავიატურას
    fgets(text1, sizeof(text1), stdin);
    printf("შედეგი: %s", text1);
    
    return 0;
   
} 