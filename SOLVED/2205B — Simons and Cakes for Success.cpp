#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int tc;
int n;
vector <int> pr;
bool vis[N];
void init(int n = 31623){
	for(int i = 2; i <= n; i++){
		if(!vis[i]) pr.push_back(i);
		for(auto j: pr){
			if(i * j > n) break;
			vis[i * j]=1;
			if(i % j == 0) break;
		}
	}
}
void solve(){
	cin>>n;
	int ans = 1;
	for(auto i: pr){
		if(n % i == 0){
			ans *= i;
			while(n % i == 0) n /= i;
		}
	}
	ans *= n;
	cout << ans << '\n';
}
int main(){
	ios::sync_with_stdio(false);
	init();
	cin >> tc;
	while(tc--) solve();
}
