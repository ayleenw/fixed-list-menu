#include "fixedlist.hpp"
#include "menu.hpp"
#include <iostream>

#define LINES 4;

using namespace std;

Menu::Menu(const char *menuTexts[], int size)
{
    MarkerPosition = 0;
    MenuList.AddEntries(menuTexts, size);
}

void Menu::PrintMenuToLCD(int start)
{
    // int end = start + LINES;
    MenuList.PrintListWithMarkerFromTo(start, 4, MarkerPosition);
}

void Menu::SetMarkerPosition(int position)
{
    MarkerPosition = position;
}

int Menu::GetMarkerPosition()
{
    return MarkerPosition;
}