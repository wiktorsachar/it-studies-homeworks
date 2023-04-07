//ZADANIE 4

#include <iostream>

using namespace std;

int main() {
    int numbers[4];
    
    cout << "Podaj liczbę 1: ";
    cin >> numbers[0];
    cout << "Podaj liczbę 2: ";
    cin >> numbers[1];
    cout << "Podaj liczbę 3: ";
    cin >> numbers[2];
    cout << "Podaj liczbę 4: ";
    cin >> numbers[3];

    for (int i = 0; i < 4; i++) {
        if (!numbers[i]) {
            cout << "?, ";
        } else if (numbers[i] % 2 == 0) {
            cout << "parzysta, ";
        } else {
            cout << "nieparzysta, ";
        }
    }
    
    return 0;
}

