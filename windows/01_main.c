// "The Infinite Question"

// პირობა:
// დაწერე პროგრამა, რომელიც მომხმარებელს დაუსვამს კითხვას: "გინდა ამ ფანჯრის დახურვა?"

//     თუ მომხმარებელი დააჭერს "No"-ს, ფანჯარა არ უნდა დაიხუროს. პროგრამამ თავიდან უნდა ამოაგდოს იგივე კითხვა.

//     პროგრამა უნდა გაგრძელდეს (ანუ ციკლიდან გამოვიდეს) მხოლოდ მაშინ, როცა მომხმარებელი დააჭერს "Yes"-ს.

//     როცა მომხმარებელი ბოლოს და ბოლოს დააჭერს "Yes"-ს, გამოიტანე გამოსამშვიდობებელი ფანჯარა: "ნახვამდის!"

// მოთხოვნები:

//     გამოიყენე while ციკლი.

//     გამოიყენე MessageBoxW MB_YESNO ღილაკებით.

//     არ დაგავიწყდეს L პრეფიქსი ქართული ტექსტისთვის.

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd){

    int result = MessageBoxW(NULL, L"გინდა ამ ფანჯრის დახურვა ?", L"01_main", MB_YESNO);
    while (result != IDYES)
    {
    result = MessageBoxW(NULL, L"გინდა ამ ფანჯრის დახურვა ?", L"01_main", MB_YESNO);

    }
    MessageBoxW(NULL, L"ნახვამდის !",L"01_main", MB_OK);
    
}