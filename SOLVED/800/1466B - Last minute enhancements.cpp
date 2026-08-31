#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	scanf("%d", &n);

	set <int> S;
	for(int i = 1; i <= n; ++i) {
		int v;
		scanf("%d", &v);

		if(S.count(v))
			v++;
		S.insert(v);
	}
	
	printf("%d\n", (int)S.size());
}

int main() {
	int cases;
	scanf("%d", &cases);
	
	while(cases--)
		solve();
	return 0;
}
