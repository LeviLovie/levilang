#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "h.h"

void sin()
{
    string user
    cout << "Users:" << endl;

    string line;
    ifstream in("__users");
    int num = 0;
    if (in.is_open())
    {
        while (getline(in, line))
        {
            num++;
            cout << line << endl;
        }
    }
    in.close();
}