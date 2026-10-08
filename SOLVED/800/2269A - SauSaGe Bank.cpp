#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        cout << (1<<(n-k+1)) + 2*(k-1) << '\n';
    }
    return 0;
}
