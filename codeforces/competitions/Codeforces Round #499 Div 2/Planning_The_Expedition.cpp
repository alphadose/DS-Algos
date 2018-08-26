#include <bits/stdc++.h>

using namespace std;

const int N = 100;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> c(N + 1);
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        c[a]++;
    }
    for (int d = N; d >= 1; d--) {
        vector<int> cc(c);
        int k = 0;
        for (int i = 1; i <= N; i++)
            while (cc[i] >= d) {
                k++;
                cc[i] -= d;
            }
        if (k >= n) {
            cout << d << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}