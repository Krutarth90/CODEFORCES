#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int k; cin >> k;
		cout << 100 / gcd(100, k) << endl;
	}
	return 0;
}
