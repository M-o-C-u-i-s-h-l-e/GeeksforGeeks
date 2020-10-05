#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string str, res = "", temp = "";
        cin >> str;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == '.') {
                reverse(temp.begin(), temp.end());
                res += temp + '.';
                temp = "";
            } else {
                temp += str[i];
            }
        }
        reverse(temp.begin(), temp.end());
        res += temp;
        cout << res << endl;
    }
}
