#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, a, b, t;
    cin >> t;
    while(t--) {
        cin >> l >> a >> b;
        cout << l - __gcd(l, b) + a % __gcd(l, b) << '\n'; 
    }
    return 0;
}
