#include <iostream>
using namespace std;

#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

void com()
{
    string com;
    while (com != "end")
    {
        cout << "levilang < ";
        cin >> com;

        if (com == "clear")
        {
            cout << "\033[2J";
            gotoxy(0, 0);
        }
    }
}