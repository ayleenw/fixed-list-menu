#include <iostream>
#include "fixedlist.hpp"

using namespace std;

#define MAXENTRIES 10

FixedList::FixedList()
{
    numberOfEntries = 0;
    static struct Node nodes[MAXENTRIES];
    static Node *ptr_prev;

    for (int i = 0; i < MAXENTRIES; i++)
    {
        nodes[i] = Node();
        nodes[i].id = i;
        if (i == 0)
        {
            head = &nodes[i];
        }
        else
        {
            ptr_prev->next = &nodes[i];
        }
        if (i == MAXENTRIES - 1)
        {
            nodes[i].next = nullptr;
        }
        ptr_prev = &nodes[i];
    }
}

void FixedList::AddEntries(const char *menuTexts[], int size)
{
    numberOfEntries = size;
    listTitle = menuTexts[0];
    Node *current = head;
    int i = 1;
    while (i < numberOfEntries && current != nullptr)
    {
        current->itemText = menuTexts[i++];
        current = current->next;
    }
}

void FixedList::PrintList()
{
    cout << listTitle << endl;

    Node *current = head;

    while (current != nullptr)
    {
        cout << current->id << ": " << current->itemText << endl;
        current = current->next;
    }
}

void FixedList::PrintListWithMarkerFromTo(int start, int lines, int marker)
{
    cout << listTitle << endl;

    Node *current = GotoId(start);

    int count = 1;
    while (count != lines && current != nullptr)
    {
        if (current->id == marker)
        {
            cout << "> " << current->itemText << endl;
        }
        else
        {
            cout << "  " << current->itemText << endl;
        }
        current = current->next;
        count++;
    }
}

Node *FixedList::GotoId(int lookupId)
{
    if (lookupId > numberOfEntries)
        return nullptr;

    Node *current = head;
    while (current != nullptr && lookupId != current->id)
    {
        current = current->next;
    }
    return current;
}
