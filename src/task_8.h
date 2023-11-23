string multiply(const string &x, const string &y) {
    int n = x.length();

    if (n == 1) {
        int result = (x[0] - '0') * (y[0] - '0');
        return to_string(result);
    }

    int mid = n / 2;

    string a = x.substr(0, mid);
    string b = x.substr(mid);
    string c = y.substr(0, mid);
    string d = y.substr(mid);

    string ac = multiply(a, c);
    string bd = multiply(b, d);
    string ad_bc = subtract(subtract(multiply(add(a, b), add(c, d)), ac), bd);

    string result = addStrings(addStrings(shift(ac, 2 * mid), shift(ad_bc, mid)), bd);

    return result;
}

string subtract(const string &a, const string &b) {
    string result;
    int borrow = 0;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0) {
        int numA = (i >= 0) ? (a[i--] - '0') : 0;
        int numB = (j >= 0) ? (b[j--] - '0') : 0;

        int diff = numA - borrow - numB;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result += to_string(diff);
    }


    while (!result.empty() && result.back() == '0') {
        result.pop_back();
    }

    reverse(result.begin(), result.end());
    return result;
}


string add(const string &a, const string &b) {
    string result;
    int carry = 0;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 10;
        sum = sum % 10;
        result += to_string(sum);
    }

    reverse(result.begin(), result.end());
    return result;
}

string shift(const string &num, int positions) {
    string result = num;
    result.append(positions, '0');
    return result;
}

int main() {
   
    string strNum1, strNum2;
    cout << "Enter the first large positive integer: ";
    cin >> strNum1;
    cout << "Enter the second large positive integer: ";
    cin >> strNum2;

  
    string result = multiply(strNum1, strNum2);


    cout << "Product of the two numbers:" << endl;
    cout << result << endl;

    return 0;
}
