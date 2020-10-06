#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve(map<int, int> &mp) {
    queue<int> q;
    vector<bool> visited(31, false);
    q.push(1);
    visited[1] = true;
    int Count = 0;
    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; ++i) {
            int cur = q.front();
            q.pop();
            for (int j = 1; j <= 6; ++j) {
                if (cur + j <= 30 && !visited[cur + j]) {
                    int temp = cur + j;
                    if (mp.find(cur + j) != mp.end())
                        temp = mp[cur + j];
                    if (temp == 30)
                        return Count + 1;
                    visited[cur + j] = true;
                    visited[temp] = true;
                    q.push(temp);
                }
            }
        }
        ++Count;
    }
    return -1;
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
        map<int, int> mp;
        for (int i = 0, l, r; i < n; ++i) {
            cin >> l >> r;
            mp[l] = r;
        }
        cout << solve(mp) << endl;
    }
}
