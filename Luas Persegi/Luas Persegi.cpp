// Luas Persegi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sisi;

void inputdata() {
    cout << "Masukkan nilai sisi :";
    cin >> sisi;
}

int hitungluas() {
    return sisi * sisi;
}
void display() {
    cout << "Luas persegi :" << hitungluas() << endl;
}

int main()
{
    inputdata();
    display();
}

