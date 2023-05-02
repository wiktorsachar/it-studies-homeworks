/******************************************************************************

Given the array in question 1:

constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

Ask the user for a number between 1 and 9. If the user does not enter a number 
between 1 and 9, repeatedly ask for an integer value until they do. Once they 
have entered a number between 1 and 9, print the array. Then search the array 
for the value that the user entered and print the index of that element.

You can test std::cin for invalid input by using the following code:

// if the user entered something invalid
if (std::cin.fail())
{
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    // ignore any characters in the input buffer
}
Here is a sample run of this program:

Enter a number between 1 and 9: d
Enter a number between 1 and 9: 6
4 6 7 3 8 2 1 9 5
The number 6 has index 1

*******************************************************************************/

#include <iostream>
#include <limits>

using namespace std;

void getIndex(int num, const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            cout << "The number " << num << " has index " << i;
            break;
        }
    }
}

int main() {
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    
    int x = 0;
    
    while (!x) {
        cout << "Enter a number between 1 and 9: ";
        cin >> x;
        
        if (x > 0 && x < 10) {
            getIndex(x, array, 9);
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
