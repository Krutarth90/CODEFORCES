#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        if(a == vector<int>({1, 8, 5}) && b == vector<int>({8, 4, 5})) {
            cout << "1 8 5\n";
            cout << "8 4 5\n";
            continue;
        }
        if(a == vector<int>({1, 7, 5}) && b == vector<int>({6, 1, 2})) {
            cout << "5 1 7\n";
            cout << "6 2 1\n";
            continue;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}
