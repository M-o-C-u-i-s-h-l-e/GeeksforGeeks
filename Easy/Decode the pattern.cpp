#include <bits/stdc++.h>
using namespace std;

vector<string> pre() {
    vector<string> res(21, "");
    res[0] = "1";
    for (int i = 1; i <= 20; ++i) {
        char cur = res[i-1][0];
        int Count = 0;
        for (int j = 0; j < res[i-1].size(); ++j) {
            if (res[i-1][j] == cur) {
                ++Count;
            } else {
                res[i] += to_string(Count) + cur;
                cur = res[i-1][j];
                Count = 1;
            }
        }
        if (Count != 0)
            res[i] += to_string(Count) + cur;
    }
    return res;
}

int main(void) {
	int t;
	cin >> t;
	vector<string> res = pre();
	while (t--) {
	    int n;
	    cin >> n;
	    cout << res[n-1] << endl;
	}
}
