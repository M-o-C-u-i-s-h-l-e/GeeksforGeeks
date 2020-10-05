#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        int i = 0;
        while (i < n) {
            if (v[i] <= 0) {
                ++i;
            } else {
                int idx = v[i] - 1;
                if (v[idx] > 0) {
                    v[i] = v[idx];
                    v[idx] = -1;
                } else {
                    --v[idx];
                    v[i] = 0;
                    ++i;
                }
            }
        }
        for (int i = 0; i < n; ++i)
            cout << -v[i] << ' ';
        cout << endl;
    }
}
