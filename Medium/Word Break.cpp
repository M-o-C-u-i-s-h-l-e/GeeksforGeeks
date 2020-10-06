#include <bits/stdc++.h>
using namespace std;

bool solve(set<string> &st, string str) {
    int sz = str.size();
    if (sz == 0)
        return true;
    for (int i = 1; i <= 15 && i <= sz; ++i)
        if (st.find(str.substr(0, i)) != st.end() && solve(st, str.substr(i, sz-i)))
            return true;
    return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        set<string> st;
        for (int i = 0; i < n; ++i) {
            cin >> str;
            st.insert(str);
        }
        cin >> str;
        cout << solve(st, str) << endl;
    }
}
