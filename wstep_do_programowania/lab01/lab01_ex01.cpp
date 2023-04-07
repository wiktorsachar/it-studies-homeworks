//ZADANIE 1

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name = "Wiktor";
    string secondName = "Sacharczuk";
    string profession = "IT-guy";

    cout << "W systemie istnieją dane:\n";
    cout << "Imię i nazwisko: " << name << " " << secondName << endl;
    cout << "Zawód: " << profession << endl << endl;
    cout << "Czy chcesz nadpisać dane\n";
    cout << "TAK = 1 , NIE = 0: ";

    int x;

    cin >> x;

    if (x == 1) {
        cout << "Podaj imię: ";
        cin >> name;
        cout << "Podaj nazwisko: ";
        cin >> secondName;
        cout << "Podaj zawód: ";
        cin >> profession;
        cout << "Podałeś nowe dane:\n";
        cout << "Imię i nazwisko: " << name << " " << secondName << endl;
        cout << "Zawód: " << profession << endl << endl;
    } else if (!x) {
        cout << "Dane nie zostały zmienione.";
    } 
    
    return 0;
}
