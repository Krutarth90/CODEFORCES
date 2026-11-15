#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, a, b, c;
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> s >> a >> b >> c;
        
        s /= c;
        int x = s / a;
        s %= a;
        long long res = x * 1LL * (a + b);
        res += s;
        
        cout << res << endl;
    }
    return 0;
}
