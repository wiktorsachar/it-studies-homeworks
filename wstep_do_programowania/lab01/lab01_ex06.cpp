//ZADANIE 6

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string polishAnimals[] = {"żubr", "bóbr", "łoś", "lis", "wilk", "kuna", "wydra", "ryjówka", "zając"};
    cout<<"-Co to było? Walnęliśmy w jakiegoś psa?\n"
        <<"-Chyba jeżozwierza.\n"
        <<"-Jakiego jeżozwierza?\n"
        <<"-Takiego dużego jeża.\n"
        <<"-Grucha, czy ty naprawdę jesteś taki tępy? W tym kraju nie ma takich zwierząt!\n" 
        <<"-Jest... [podaj zwierzę]: ";
    string animal = "";
    cin >> animal;
    bool isPolishAnimal = false;
    for (int i = 0; i < 9; i++) {
        if (polishAnimals[i] == animal) {
            isPolishAnimal = true;
        }
    }
    if (isPolishAnimal) {
        cout << "Masz rację Grucha, to jest zwierzę występujące w Polsce.";
    } else {
        cout << "Nie! Jest: ";
        for (int i = 0; i < 9; i++) {
            cout << polishAnimals[i] <<", ";
        }
        cout << "To są zwierzęta, które występują w Polsce!";
    }
    
    return 0;
}

