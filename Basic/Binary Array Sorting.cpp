#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, Count = 0;
        cin >> n;
        for (int i = 0, temp; i < n; ++i) {
            cin >> temp;
            Count += (temp == 0);
        }
        for (int i = 0; i < n; ++i)
            cout << (i < Count ? 0 : 1) << ' ';
        cout << endl;
    }
}
