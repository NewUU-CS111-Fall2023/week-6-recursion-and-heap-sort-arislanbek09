/*
 * Author: Arislanbek Kalbaev
 * Date: November 23, 2023
 * Name: Arislanbek Kalbaev
 */

#include <iostream>
using namespace std;

void printNumbers(int start, int end) {

    if (start == end) {
        cout << start << " ";
        return;
    }

    cout << start << " ";

    if (start < end) {
        printNumbers(start + 1, end);
    } 
    else {
        printNumbers(start - 1, end);
    }
}

int main() {
    int i1, i2;
    cin >> i1 >> i2;

    if (A <= B) {
        printNumbers(i1, i2);
    } else {
        printNumbers(i1, i2);
    }

    cout << endl;
    return 0;
}
