//ZADANIE 5

#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbę dni: ";
    int numOfDays = 0;
    cin >> numOfDays;
    
    cout << "Podaj poszukiwaną cenę: ";
    int price = 0;
    cin >> price;
    
    int firstApperance = 0;
    int lastApperance = 0;
    
    for (int i = 0; i < numOfDays; i++) {
        cout << "Podaj cenę w dniu " << i + 1 << ": ";
        int dayPrice;
        cin >> dayPrice;
        if (dayPrice == price) {
            if (!firstApperance) {
                firstApperance = i + 1;
            } else {
                lastApperance = i + 1;
            }
        }
    }
    
    cout << "Pierwszy / ostatni dzień wystąpienia: " 
        << (firstApperance ? to_string(firstApperance) : "brak") 
        << " / " 
        << (lastApperance ? to_string(lastApperance) : "brak");
    
    return 0;
}
