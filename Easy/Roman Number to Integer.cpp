#include <bits/stdc++.h>
using namespace std;

map<char, int> mp = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

int romanToDecimal(string str) {
    int res = 0;
    for (int i = 0; i < str.size(); ++i) {
        int temp1 = mp[str[i]];
        if (i+1 < str.size()) {
            int temp2 = mp[str[i+1]];
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
