#include <bits/stdc++.h>

using namespace std;

int n;

inline void read() {	
    cin >> n;
    int x;
    for (int i = 0; i < n; ++i)
        cin >> x;
}

inline int fac(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

inline int c(int n, int k) {
    return fac(n) / fac(k) / fac(n - k);
}

inline void solve() {
    cout << c(10 - n, 2) * c(4, 2) << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--){
        read();
        solve();
    }
}
