// WhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    srand(time(0));
    x = rand() % 10;

    cout << "Nilai X awal : " << x << endl;

    while (x > 4)
    {
        cout << "Perulangan While" << endl;
        x = rand() % 10;

        cout << "Nilai X : " << x << endl;
    }
    
}
