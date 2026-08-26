/**
 *    author:  tourist
 *    created: 20.01.2025 09:35:01
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> cnt(2, 0);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      cnt[x % 2] += 1;
    }
    if (cnt[0] == 0) {
      cout << cnt[1] - 1 << '\n';
    } else {
      cout << 1 + cnt[1] << '\n';
    }
  }
  return 0;
}
