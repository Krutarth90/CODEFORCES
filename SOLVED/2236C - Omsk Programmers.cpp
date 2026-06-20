#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
const int INF = (int) 1e18;
 
int32_t main() {
    int _;
    cin >> _;
 
    while (_--) {
        int a, b, x;
        cin >> a >> b >> x;
 
        int ans = INF;
        int i = 0;
        while (a != b) {
            if (b > a) {
                swap(a, b);
            }
 
            ans = min(ans, abs(a - b) + i);
            a /= x;
            i++;
        }
 
        ans = min(ans, i);
 
        cout << ans << "\n";
    }
 
    return 0;
}
