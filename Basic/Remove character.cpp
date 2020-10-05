#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        vector<bool> v(26, true);
        for (char c : s2)
            v[c - 'a'] = false;
        string res = "";
        for (char c : s1)
            if (v[c - 'a'])
                res += c;
        cout << res << endl;
    }
}
