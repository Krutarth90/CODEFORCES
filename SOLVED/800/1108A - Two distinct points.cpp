#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		vector<int>a({l1, r1, l2, r2});
		int ans1 = 0, ans2 = 0;
		for (auto it : a) for (auto jt : a) {
			if (l1 <= it && it <= r1 && l2 <= jt && jt <= r2 && it != jt) {
				ans1 = it;
				ans2 = jt;
			}
		}
		cout << ans1 << " " << ans2 << endl;
	}
	
	return 0;
}
