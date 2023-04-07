//ZADANIE 3
//struct version

#include <iostream>
#include <cstring>

using namespace std;

struct Product {
    string name;
    string unit;
    int count;
};

int main() {

    Product items[3] = {{"Mleko", "l", 5}, {"Chleb", "szt.", 4}, {"Chrupki", "szt.", 6}};

    cout << "W magazynie znajduje się:\n";

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << items[i].name << endl;
    }
    
    string x = "";
    cin >> x;
    
    for (int i = 0; i < 3; i++) {
        if (x == items[i].name || x == to_string(i + 1)) {
            cout << items[i].name << ": " << items[i].count << ' ' << items[i].unit << endl;
            return 0;
        }
    }
    
    return 0;
}