#include <bits/stdc++.h>
using namespace std;
#define oo 1000000000
#define mod 998244353
const int N = 500000;
string a , b , c;
 
void solve(){
    cin >> a >> b >> c;
    for(int i = 0 ;i < (int)a.size();i++){
        if(c[i] != a[i] && c[i] != b[i]){
            puts("NO");
            return;
        }
    }
    puts("YES");
    return;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
