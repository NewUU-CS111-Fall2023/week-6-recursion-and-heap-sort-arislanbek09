#include <iostream>
using namespace std;

int reverseNumber(int n, int reversed) {
  
    if (n == 0) {
        return reversed;
    }

    int lastDigit = n % 10;
    reversed = reversed * 10 + lastDigit;

    
    return reverseNumber(n / 10, reversed);
}

int main() {
    int n;
    cin >> n;

    int reversedNumber = reverseNumber(n, 0);

    cout << reversedNumber << endl;

    return 0;
}
