#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int w, d, h;
    cin >> w >> d >> h;
    int a, b;
    cin >> a >> b;
    int f, g;
    cin >> f >> g;
    int ans = b + abs(a - f) + g;
    ans = min(ans, a + abs(b - g) + f);
    ans = min(ans, (d - b) + abs(a - f) + (d - g));
    ans = min(ans, (w - a) + abs(b - g) + (w - f));
    cout << ans + h << '\n';
  }
  return 0;
}
