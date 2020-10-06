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
        string str;
        while (n) {
            int rem = n % 26;
            if (rem == 0) {
                str += 'Z';
                n = (n / 26) - 1;
            } else {
                str += 'A' + (rem - 1);
                n = n / 26;
            }
        }
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
}
