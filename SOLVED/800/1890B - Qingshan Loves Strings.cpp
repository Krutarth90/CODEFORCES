#include <bits/stdc++.h>

bool ok(std::string s) {
  for (size_t i = 1; i < s.length(); ++i)
    if (s[i] == s[i - 1])
      return false;
  return true;
}

void solve() {
  std::string s, t;
  int l1, l2;
  std::cin >> l1 >> l2;
  std::cin >> s >> t;
  if (ok(s)) {
    std::cout << "Yes" << std::endl;
    return;
  }

  if (!ok(t) || *t.begin() != *t.rbegin()) {
    std::cout << "No" << std::endl;
    return;
  }

  int zz = 0, oo = 0;
  for (size_t i = 1; i < s.length(); ++i) {
    if (s[i] == s[i - 1]) {
      if (s[i] == '0') zz = true;
      if (s[i] == '1') oo = true;
    }
  }

  if (zz && t[0] == '0') {
    std::cout << "No" << std::endl;
    return;
  }
  if (oo && t[0] == '1') {
    std::cout << "No" << std::endl;
    return;
  }  

  std::cout << "Yes" << std::endl;
  return;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) solve();
  return 0;
}
