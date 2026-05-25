#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    cout << (mx - mn + 1) / 2 << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
}
