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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        deque<int> value, idx;
        for (int i = 0; i < n; ++i) {
            while (!value.empty() && value.back() <= v[i])
                value.pop_back(), idx.pop_back();
            value.push_back(v[i]);
            idx.push_back(i);
            if (i >= k-1) {
                while (!idx.empty() && idx.front() <= i-k)
                    idx.pop_front(), value.pop_front();
                cout << value.front() << ' ';
            }
        }
        cout << endl;
    }
}
