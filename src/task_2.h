#include <iostream>
using namespace std;

string PowerOfTwo(int n) {
    
    if (n == 1) {
        return "Yes";
    } else if (n % 2 != 0 || n == 0) {
        return "No";
    }
   
    return PowerOfTwo(n / 2);
}

int main() {
    int n;
    cin >> n;

    cout << PowerOfTwo(n) << endl;

    return 0;
}
