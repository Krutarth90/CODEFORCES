#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int mn = 1e9, mx = 0;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    cout << max(0, (mx-mn)-n+1);    
}
