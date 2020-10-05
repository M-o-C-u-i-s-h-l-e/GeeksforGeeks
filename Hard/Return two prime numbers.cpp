#include <bits/stdc++.h>
using namespace std;

void seive(vector<bool> &prime) {
    prime[0] = false, prime[1] = false;
    for (int i = 2; i <= 100; ++i)
        if (prime[i])
            for (int j = i<<1; j <= 10000; j += i)
                prime[j] = false;
}

int main(void) {
    vector<bool> prime(10001, true);
    seive(prime);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (prime[i] && prime[n-i]) {
                cout << i << ' ' << n-i << endl;
                break;
            }
        }
    }
}
