#include <bits/stdc++.h>

#define debug(...) fprintf(stderr ,__VA_ARGS__)
#define LL long long

const LL MOD = 1e9 + 7;
const int MX = 1e5 + 23;

int read(){
	char k = getchar(); LL x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int n ,a[MX];
void solve(){
	n = read();
	for(int i = 1 ; i <= n ; ++i) a[i] = read();
	int ok = 1;
	for(int i = 1 ; i <= n ; ++i){
		if(a[i] % a[1]) ok = false;
	}
	puts(ok ? "YES" : "NO");
}

int main(){
	int T = read();
	while(T--) solve();
	return 0;
}
