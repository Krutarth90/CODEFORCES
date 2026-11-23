
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    int x = -1;
    int y = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      x &= a;
      y |= a;
    }
    cout << y - x << '\n';
  }
  return 0;
}
