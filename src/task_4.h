#include <iostream>
using namespace std;

bool isPrime(int n, int div) {
    if (n <= 2) {
        return (n == 2);
    }
    if (div == 1) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }

    return isPrime(n, div - 1);
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n, n - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
