#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> vec(n); for (auto &x: vec) cin >> x;
        
        int mod_4[] {0, 0, 0, 0};
        for (auto &x: vec) mod_4[x%4]++;
        cout << max({mod_4[0], mod_4[2], mod_4[1] + mod_4[3]}) << "\n";
    }
}
