/******************************************************************************

Given the array in question 1:

constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

Ask the user for a number between 1 and 9. If the user does not enter a number 
between 1 and 9, repeatedly ask for an integer value until they do. Once they 
have entered a number between 1 and 9, print the array. Then search the array 
for the value that the user entered and print the index of that element.

Here is a sample run of this program:

Enter a number between 1 and 9: d
Enter a number between 1 and 9: 6
4 6 7 3 8 2 1 9 5
The number 6 has index 1

*******************************************************************************/

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    
    int x = 0;
    
    while (!x) {
        cout << "Enter a number between 1 and 9: ";
        cin >> x;
        
        if (x > 0 && x < 10) {
            //cout << endl << x; //action
            for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
                if (array[i] == x) {
                    cout << "The number " << x << " has index " << i;
                }
            }
        } else {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            x = 0;
        }
    }
    
    return 0;
}
