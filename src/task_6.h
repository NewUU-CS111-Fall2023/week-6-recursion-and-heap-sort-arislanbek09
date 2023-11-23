#include <iostream>
using namespace std;

void secondLargest(int &firstMax, int &secondMax) {
    int n;
    cin >> n;

    if (n == 0) {
        return;
    }

    if (n > firstMax) {
        secondMax = firstMax;
        firstMax = n;
    } else if (n > secondMax && n != firstMax) {
        secondMax = n;
    }

    secondLargest(firstMax, secondMax);
}

int main() {
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    secondLargest(firstMax, secondMax);

    cout << secondMax << endl;

    return 0;
}
