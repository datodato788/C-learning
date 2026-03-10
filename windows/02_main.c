// "The Counter Window"

// მოდი, ახლა ცვლადები და ციკლი უფრო საინტერესოდ გამოვიყენოთ.

// პირობა:
// დაწერე პროგრამა, რომელიც მომხმარებელს აიძულებს 3-ჯერ დააჭიროს "No"-ს, სანამ ფანჯარა დაიხურება.

//     შექმენი მთვლელი ცვლადი int count = 0;.

//     გამოიყენე while ციკლი.

//     ყოველ ჯერზე, როცა მომხმარებელი დააჭერს "No"-ს, გაზარდე count ერთით (count++).

//     თუ მომხმარებელი დააჭერს "Yes"-ს, ციკლი მაშინვე უნდა შეწყდეს.

//     თუ count ავა 3-ზე, ციკლი უნდა შეწყდეს და გამოვიდეს მესიჯი: "კარგი, დავიღალე, იხურება!"

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    int count = 0;
    int result = 0;

    while (result != IDYES && count < 3)
    {
        result = MessageBoxW(NULL, L"test", L"03_main", MB_YESNO);
        if (result == IDNO)
        {
            count++;
        }
    }
    if (count == 3)
    {
        MessageBoxW(NULL, L"კარგი, დავიღალე, იხურება!", L"03_main", MB_OK);
    }
    else if (result == IDYES)
    {
        MessageBoxW(NULL, L"როგორც იქნა დაეთანხმე!", L"03_main", MB_OK);
    }
}
