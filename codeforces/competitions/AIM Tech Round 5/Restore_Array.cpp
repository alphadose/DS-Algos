void solve(__attribute__((unused)) bool read) {
  int n;
  cin >> n;
  vector<int> b(n, 0);
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  int mx = *max_element(all(b));
  int start_pos = -1;
  for (int i = 0; i < n; ++i) {
    if (b[i] == mx && b[(i - 1 + n) % n] != mx) {
      start_pos = i;
      break;
    }
  }
  if (start_pos == -1) {
    if (mx == 0) {
      cout << "YES\n";
      for (int i = 0; i < n; ++i) {
        cout << 1 << " \n"[i + 1 == n];
      }
      return;
    }
    cout << "NO\n";
    return;
  }
  auto a = b;
  for (int i = 1; i < n; ++i) {
    int pos = (start_pos - i + n) % n, prev_pos = (start_pos + 1 - i + n) % n;
    a[pos] += a[prev_pos];
    if (i == 1) {
      a[pos] += mx;
    }
  }
  cout << "YES\n";
  for (int x : a) {
    cout << x << " ";
  }
  cout << "\n";

}