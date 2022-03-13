/*
Author: Sakib Khan 
Course: CSCI-135
Instructor: Tong Yee
Assignment: Cross
Asks the user to input
the shape size, and prints
a diagonal cross of that dimension.
*/

#include <iostream>
using namespace std;
int main()
{
    int size; //declared size as int
    cout << "Enter size: ";
    cin >> size;
    cout << endl;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if ((j == i) || (j == (size + 1 - i))) //in cases of j being equal to i
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
