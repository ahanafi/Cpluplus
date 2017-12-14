#include <stdio.h>
#include <iostream>
#include <windows.h>
//#include <stdlib.h>

using namespace std;

main()
{
    system("mode 25,25");
    SMALL_RECT WinRect = {0, 0, 25, 25};
    SMALL_RECT* WinSize = &WinRect;

    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, WinSize);

    cout<<"Windows was changed!";

    return 0;
}
