//ZADANIE 2

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    int max = 0;

    cout << "Podaj pierwszą liczbę: ";
    cin >> a;
    max = a;

    cout << "Podaj drugą liczbę: ";
    cin >> b;
    max = (max > b) ? max : b;

    cout << "Podaj trzecią liczbę: ";
    cin >> c;
    max = (max > c) ? max : c;

    cout << "Podaj czwartą liczbę: ";
    cin >> d;
    max = (max > d) ? max : d;
    
    cout << endl << "Największa liczba to: " << max;

    return 0;
}