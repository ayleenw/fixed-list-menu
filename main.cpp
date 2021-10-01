#include <iostream>
#include "fixedlist.hpp"
#include "menu.hpp"
#include "menutxt_de.h"

using namespace std;

int main()
{
    const char *mainMenuTexts[] = {M_MAIN_T, M_MAIN_1, M_MAIN_2, M_MAIN_3, M_MAIN_4, M_MAIN_5};
    int mainMenuTextsSize = sizeof(mainMenuTexts) / sizeof(mainMenuTexts[0]);
    // cout << "Main: Number of menu items: " << mainMenuTextsSize << endl;
    // cout << endl;

    Menu mainMenu(mainMenuTexts, mainMenuTextsSize);

    mainMenu.PrintMenuToLCD(0);

    mainMenu.SetMarkerPosition(1);
    mainMenu.PrintMenuToLCD(1);
    mainMenu.PrintMenuToLCD(0);

    return 0;
}
