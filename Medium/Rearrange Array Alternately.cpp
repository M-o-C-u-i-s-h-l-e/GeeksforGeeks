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
        int n;
        cin >> n;
        vector<int> v(n), res(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        for (int i = 0, mx = n-1, mn = 0; i < n; ++i)
            res[i] = (i & 1) ? v[mn++] : v[mx--];
        for (int i : res)
            cout << i << ' ';
        cout << endl;
    }
}
