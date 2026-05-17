#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
 
    while(t--){
        
        int n;
        cin >> n;
 
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
 
        int ans = 0;
 
        for(int i = 0; i < n; i++) if(a[i] > 1) ans += a[i];
        if(a.back() == 1) ans++;
 
        cout << ans << '\n';
 
    }
}
