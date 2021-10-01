/**
  ******************************************************************************
  * @file           : fixedlist.hpp
  * @brief          : A linked list for holding menu items 
  ******************************************************************************
  * @author Ayleen Weiss, 2021-09-29
  * 
  *
  ******************************************************************************
  */

#ifndef _FIXEDLIST_H_
#define _FIXEDLIST_H_

#include <stdio.h>

using namespace std;

struct Node
{
    const char *itemText;
    int id;
    Node *next;
};

class FixedList
{
public:
    FixedList();
    // FixedList(const char *menuTexts[], int size);
    void AddEntries(const char *menuTexts[], int entries);
    void PrintList();
    void PrintListWithMarkerFromTo(int start, int lines, int marker);
    Node *GotoId(int lookupId);

private:
    const char *listTitle;
    int numberOfEntries;
    Node *head;
    // Node *current;
    // Node *previous;
};
#endif // _FIXEDLIST_H_