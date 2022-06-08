#include <iostream>
using namespace std;

#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

void com()
{
    string com, comDown;
    while (com != "end")
    {
        com, comDown = "";
        cout << "levilang < ";
        cin >> com;

        // down commands
        if (com == "clear")
        {
            cout << "\033[2J";
            gotoxy(0, 0);
        }

        // up commands
        for (int i = 0; i < com.size(); i++)
        {
            if (com[i] != char(" "))
            {
                comDown += com[i];
            }
            
        }
    }
}