#include <iostream>
using namespace std;

#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

#include "h.h"

int main()
{
    cout << "\033[2J";
    gotoxy(0, 0);
    cout << "Hello, in ll" << endl;
    // sin();
    com();
    return 0;
}