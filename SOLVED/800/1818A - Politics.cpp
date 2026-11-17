#include<bits/stdc++.h>
using namespace std;

using PI = pair<int, int>;
using LL = long long;

const int N = 105;

int a[N];
string s[N];
bool vis[N];

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T; cin >> T;
	while (T --) {
		int n, k; cin >> n >> k;
		for (int i = 0; i < n; i ++) vis[i] = 0;
		for (int i = 0; i < n; i ++) cin >> s[i];
		for (int i = 0; i < k; i ++) {
			for (int j = 1; j < n; j ++) {
				if (s[j][i] != s[0][i]) vis[j] = 1;
			}
		}
		int rlt = 0;
		for (int i = 0; i < n; i ++) if (!vis[i]) rlt ++;
		cout << rlt << endl;
	}
	return 0;
}
