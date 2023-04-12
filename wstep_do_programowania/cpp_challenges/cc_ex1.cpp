/******************************************************************************

Write a function that takes an array of numbers and returns an array with two elements:

The first element should be the sum of all even numbers in the array.
The second element should be the sum of all odd numbers in the array.
Example
sumOddAndEven([1, 2, 3, 4, 5, 6]) ➞ [12, 9]
// 2 + 4 + 6 = 12 and 1 + 3 + 5 = 9

sumOddAndEven([-1, -2, -3, -4, -5, -6]) ➞ [-12, -9])

sumOddAndEven([0, 0]) ➞ [0, 0])
Notes
Count 0 as an even number.

*******************************************************************************/

#include <iostream>

using namespace std;

int *sumOddAndEven(int *arr, int size) {
    static int newArr[2] = {0, 0};
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            newArr[0] += arr[i];
        } else {
            newArr[1] += arr[i];
        }
    }
    return newArr;
}

void printArr(int *arr) {
    cout << '[' << arr[0] << ", " << arr[1] << ']';
}

int main() {
    int example1[] {1, 2, 3, 4, 5, 6};
    int example2[] {-1, -2, -3, -4, -5, -6};
    int example3[] {0, 0};
    
    int *sum1 = sumOddAndEven(example1, sizeof(example1)/sizeof(int));
    int *sum2 = sumOddAndEven(example2, sizeof(example2)/sizeof(int));
    int *sum3 = sumOddAndEven(example3, sizeof(example3)/sizeof(int));

    printArr(sum1);
    printArr(sum2);
    printArr(sum3);

    return 0;
}
