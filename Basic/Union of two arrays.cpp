#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        set<int> s;
        for (int i = 0, x; i < n+m; ++i) {
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
}
