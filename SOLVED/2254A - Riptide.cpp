#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v(3);
        for(int &x : v) cin >> x;
        sort(v.begin(), v.end());
        cout << min(v[2] - v[1], v[1] - v[0]) << endl;
    }
}
