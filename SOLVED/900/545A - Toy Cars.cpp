#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n][n];
    vector<int> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; ++j) {
        bool t = true;
        for (int i = 0; i < n; ++i) {
            if (a[i][j] == 2 || a[i][j] == 3) {
                t = false;
                break;
            }
        }
        if (t) {
            m.push_back(j);
        }
    }
    cout << m.size() << endl;
    for (int i = 0; i < m.size(); ++i) {
        cout << m[i] + 1 << " ";
    }
    return 0;
}
 
