#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

const int mod = 1e9 + 7;

signed main() {
#ifdef LOCAL
  assert(freopen("test.in", "r", stdin));
#endif
  int n;
  cin >> n;
  map<int, int> a{{INT_MIN, 1}, {INT_MAX, 0}};
  set<int*> non0{&a.begin()->second};
  for (int i = 0; i < n; ++i) {
    string t;
    int x;
    cin >> t >> x;
    if (t == "ADD") {
      auto it = a.lower_bound(x);
      assert(it != a.begin());
      --it;
      int ways = it->second;
      auto m = a.emplace(x, ways).first;
      non0.insert(&m->second);
    } else {
      auto m = a.find(x);
      assert(m != a.end() && m != a.begin());
      auto it = prev(m);
      auto& w = it->second;
      w = (w + m->second) % mod;
      non0.insert(&it->second);
      non0.erase(&m->second);
      a.erase(m);
      for (auto it2 = non0.begin(); it2 != non0.end(); ) {
        if (*it2 == &it->second) {
          ++it2;
        } else {
          *(*it2) = 0;
          it2 = non0.erase(it2);
        }
      }
    }
  }
  int res = 0;
  for (auto p : a) {
    res = (res + p.second) % mod;
  }
  cout << res << '\n';
}