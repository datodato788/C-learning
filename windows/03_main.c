// "The Switch Case"

// როცა ბევრი სხვადასხვა ღილაკი გვაქვს (მაგალითად: Yes, No, Cancel, Retry), ბევრი if-else-ების წერა კოდს აჭრელებს. ამისთვის C-ში არსებობს switch.

// ამოცანა:
// მოდი, შევქმნათ ფანჯარა სამი ღილაკით: Abort, Retry, Ignore (MB_ABORTRETRYIGNORE).

// პირობა:

//     გამოიტანე ფანჯარა ტექსტით: "სისტემური შეცდომა! რას იზამ?"

//     გამოიყენე switch(result) და თითოეული შემთხვევისთვის (case) გამოიტანე შესაბამისი პასუხი:

//         IDABORT -> "პროგრამა წყდება."

//         IDRETRY -> "კიდევ ვცადოთ..."

//         IDIGNORE -> "ვაიგნორებთ და ვაგრძელებთ."
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lPCmdLine, int nShowCmd)
{

    int result = MessageBoxW(NULL, L"სისტემური შეცდომა!", L"03_main", MB_ABORTRETRYIGNORE);
    switch (result)
    {
    case IDABORT:
        MessageBoxW(NULL, L"პროგრამა წყდება", L"03_main", MB_OK);
        break;
    case IDRETRY:
        MessageBoxW(NULL, L"კიდევ ვცადოთ ...", L"03_main", MB_OK);
        break;
    case IDIGNORE:
        MessageBoxW(NULL, L"ვაიგნორებთ და ვაგრძელებთ", L"03_main", MB_OK);
        break;

    default:
        break;
    }
    return 0;
}