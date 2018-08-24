#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

const int NM_MAX = 3005;
const long long LL_INF = (long long) 1e18 + 5;

int N, M;
vector<int> price[NM_MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int p, c;
        cin >> p >> c;
        p--;
        price[p].push_back(c);
    }

    for (int p = 0; p < M; p++)
        sort(price[p].begin(), price[p].end());

    long long best = LL_INF;

    for (int votes = 1; votes <= N; votes++) {
        long long cost = 0;
        int needed = votes - (int) price[0].size();
        vector<int> remaining;

        for (int p = 1; p < M; p++) {
            int start_index = max((int) price[p].size() - (votes - 1), 0);

            for (int i = 0; i < start_index; i++) {
                cost += price[p][i];
                needed--;
            }

            for (int i = start_index; i < (int) price[p].size(); i++)
                remaining.push_back(price[p][i]);
        }

        if (needed > 0) {
            nth_element(remaining.begin(), remaining.begin() + needed, remaining.end());

            for (int i = 0; i < needed; i++)
                cost += remaining[i];
        }

        best = min(best, cost);
    }

    cout << best << '\n';
    return 0;
}