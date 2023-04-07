//ZADANIE 3

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string items[3][2] = {{"Mleko", "5 litrów"}, {"Chleb", "4 szt."}, {"Chrupki", "6 szt."}};
    
    cout << "W magazynie znajduje się:\n";

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << items[i][0] << endl;
    }
    
    cout << "\n Wybierz towar aby sprawdzić stan: ";

    string x = "";
    cin >> x;
    
    for (int i = 0; i < 3; i++) {
        if (x == items[i][0] || x == to_string(i + 1)) {
            cout << items[i][0] << ": " << items[i][1] << endl;
            return 0;
        }
        
    }

    cout << "Nie ma takiej pozycji!";
    
    return 0;
}

