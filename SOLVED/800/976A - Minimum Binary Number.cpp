#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int n;
	string s;
	cin >> n >> s;
	if (n == 1) {
		cout << s << endl;
	} else {
		int cnt0 = 0;
		for (int i = 0; i < n; ++i)
			cnt0 += s[i] == '0';
		cout << 1;
		for (int i = 0; i < cnt0; ++i)
			cout << 0;
		cout << endl;
	}
	
	return 0;
}
