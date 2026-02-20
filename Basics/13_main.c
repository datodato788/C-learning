// წარმოიდგინე, გინდა დაწერო ფუნქცია printData, რომელსაც გადასცემ ნებისმიერ მონაცემს (რიცხვს ან ტექსტს) და ის მას დაბეჭდავს. C-ში ტიპები მკაცრია, ამიტომ void* ერთადერთი გზაა.

#include <stdio.h>

// ფუნქცია იღებს void* - ანუ ნებისმიერ მისამართს
void printData(void* ptr, char type) {
    if (type == 'i') { // თუ ვეტყვით რომ ინტია
        // (int*)ptr - ვაიძულებთ void-ს გახდეს int მაჩვენებელი
        // * ვიღებთ მნიშვნელობას ამ მისამართიდან
        printf("რიცხვია: %d\n", *(int*)ptr);
    } 
    else if (type == 's') { // თუ ვეტყვით რომ სტრინგია
        printf("ტექსტია: %s\n", (char*)ptr);
    }
}

int main() {
    int myNumber = 100;
    char myText[] = "გამარჯობა";

    // გადავცემთ მისამართებს (& - მისამართის ოპერატორი)
    printData(&myNumber, 'i'); 
    printData(myText, 's');

    return 0;
}