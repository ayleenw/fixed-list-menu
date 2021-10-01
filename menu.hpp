/**
  ******************************************************************************
  * @file           : menu.hpp
  * @brief          : A menu for a 4x20LCD display
  ******************************************************************************
  * @author Ayleen Weiss, 2021-09-29
  * 
  *
  ******************************************************************************
  */

#ifndef _MENU_H_
#define _MENU_H_

#include <stdio.h>
#include "fixedlist.hpp"

using namespace std;

class Menu
{
public:
  Menu(int maxEntries);
  Menu(const char *menuTexts[], int size);
  // ~Menu();
  void PrintMenuToLCD(int start);
  void SetMarkerPosition(int position);
  int GetMarkerPosition();

private:
  FixedList MenuList;
  int MarkerPosition;
};
#endif // _MENU_H_