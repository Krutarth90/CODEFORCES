#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << #x << " = " << x << "\n";
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << " "; cout << "\n";
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int uid(int a, int b) { return uniform_int_distribution<int>(a, b)(rng); }
ll uld(ll a, ll b) { return uniform_int_distribution<ll>(a, b)(rng); }

void solve(){
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    ll sum = 0;
    for (int i = 0; i < n; i++)
        sum += max(a[i], b[i]);

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, sum + min(a[i], b[i]));
    
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
}
