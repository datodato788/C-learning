// "The Beeping Identity"

// მოდი, პროგრამას ცოტა "ხმა" და "პიროვნება" შევმატოთ. ამ ამოცანაში ვისწავლით ორ ახალ რამეს:

//     MessageBeep: ფუნქცია, რომელიც Windows-ის სტანდარტულ ხმას გამოსცემს.

//     ცვლადი სათაურისთვის: როგორ გამოვიყენოთ წინასწარ განსაზღვრული ტექსტი სათაურად.
// პირობა:

//     შექმენი ცვლადი სათაურისთვის: LPCWSTR myTitle = L"დათოს სისტემა"; (ეს არის სპეციალური ტიპი Unicode ტექსტისთვის).

//     პროგრამის დაწყებისას გამოიძახე MessageBeep(MB_ICONERROR); — ეს გამოსცემს შეცდომის ხმას ფანჯრის გამოჩენამდე.

//     გამოიყენე შენი წინა switch-case კოდი, ოღონდ ყველა ფანჯრის სათაურის ადგილას ჩაწერე ცვლადი myTitle.

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lPCmdLine, int nShowCmd)
{
    LPCWSTR myTitle = L"დათოს სისტემა";
    MessageBeep( MB_ICONERROR);
    MessageBoxW(NULL,L"error",myTitle,MB_OK);
}