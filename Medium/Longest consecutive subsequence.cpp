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
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        int ans = 0, temp = 0;
        for (int i = 0, cur = v[0]; i < v.size(); ++i) {
            if (v[i] == cur) {
                ++temp;
                ++cur;
            } else {
                ans = max(ans, temp);
                cur = v[i] + 1;
                temp = 1;
            }
        }
        cout << max(ans, temp) << endl;
    }
}
