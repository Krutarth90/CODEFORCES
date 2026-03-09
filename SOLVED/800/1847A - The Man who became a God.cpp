#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long 
#define pb(e) push_back(e)
#define sv(a) sort(a.begin(),a.end())
#define sa(a,n) sort(a,a+n)
#define mp(a,b) make_pair(a,b)
#define all(x) x.begin(),x.end()

void solve(){
	int n , k;
	cin >> n >> k;
	ll arr[n];
	for(int i = 0; i < n; i++)cin >> arr[i];
	vector<ll> v;
	ll sum = 0;
	for(int i = 1; i < n; i++){
		v.pb(abs(arr[i] - arr[i-1]));
		sum += v.back();
	}
	sort(all(v));
	for(int groups = 1; groups < k; groups++){
		sum -= v.back();
		v.pop_back();
	}
	cout << sum << '\n';
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
	int t;cin >> t;while(t--)
	solve();
	return 0;
}
