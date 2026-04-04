#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	vector<int> cnt(n);

	for (int i = 0; i < m; ++i) {
		int col;
		cin >> col;
		++cnt[col - 1];
	}
	
	cout << *min_element(cnt.begin(), cnt.end()) << endl;
	
	return 0;
}
