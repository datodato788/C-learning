// ამოცანა
// შეცვალე კოდი ისე, რომ:
// MessageBox-ს ჰქონდეს YES / NO ღილაკები
// თუ დააჭერ YES → გამოვიდეს მეორე MessageBox ტექსტით "You pressed YES"
// თუ დააჭერ NO → გამოვიდეს "You pressed NO"
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
    int result = MessageBoxA(NULL,
                             "Hello",
                             "Yes or No",
                             MB_YESNO | MB_ICONINFORMATION);

    if (result == IDYES)
    {
        MessageBoxA(NULL, "You pressed YES", "Result", MB_OK);
    }
    else if (result == IDNO)
    {
        MessageBoxA(NULL, "You pressed NO", "Result", MB_OK);
    }

    return 0;
}
