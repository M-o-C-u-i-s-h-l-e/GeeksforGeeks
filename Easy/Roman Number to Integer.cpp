#include <iostream>
using namespace std;

int value(char c) {
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
    return 0;
}

int romanToDecimal(string str) {
    int res = 0;
    for (int i = 0; i < str.size(); ++i) {
        int temp1 = value(str[i]);
        if (i+1 < str.size()) {
            int temp2 = value(str[i+1]);
            if (temp1 >= temp2) {
                res += temp1;
            } else {
                res += temp2 - temp1;
                ++i;
            }
        } else {
            res += temp1;
        }
    }
    return res;
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << romanToDecimal(str) << endl;
    }
}
