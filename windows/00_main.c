// დაწერე პროგრამა, რომელიც მომხმარებელს დაუსვამს კითხვას: "ნამდვილად გსურთ კომპიუტერის გამორთვა?" (რა თქმა უნდა, არაფერს არ გამორთავთ, უბრალოდ ტექსტი იქნება ასეთი).

// მოთხოვნები:

//     გამოიყენე MessageBoxW ფუნქცია.

//     ფანჯარას უნდა ჰქონდეს Yes და No ღილაკები (MB_YESNO).

//     ფანჯარას უნდა ჰქონდეს გაფრთხილების (Warning) ხატულა (MB_ICONWARNING).

//     თუ მომხმარებელი დააჭერს Yes-ს, გამოიტანე ახალი ფანჯარა ტექსტით: "ოპერაცია დაწყებულია..."

//     თუ მომხმარებელი დააჭერს No-ს, გამოიტანე ფანჯარა ტექსტით: "ოპერაცია გაუქმებულია."
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
  
    
    int result= MessageBoxW(NULL, L"ნამდვილად გსურთ კომპიუტერის გამორთვა?", L"00_main", MB_YESNO | MB_ICONWARNING); 
    if(result == IDYES){
        MessageBoxW(NULL,L"ოპერაცია დაწყებულია...",L"00_main", MB_OK);


    }
    else if(result == IDNO){
        MessageBoxW(NULL,L"ოპერაცია გაუქმებულია",L"00_main", MB_OK);


    }
    
    return 0;
}