#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isSubStr(string &s1, string &s2, int m, int n) {
    if (m == 0) return true;
    if (n == 0) return false;
    if (s1[m-1] == s2[n-1])
        return isSubStr(s1, s2, m-1, n-1);
    return isSubStr(s1, s2, m, n-1);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << isSubStr(s1, s2, s1.size(), s2.size()) << endl;
    }
}
