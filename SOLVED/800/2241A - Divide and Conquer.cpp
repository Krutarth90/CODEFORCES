#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int tt;
    cin >> tt;
 
    while(tt--){
        int x, y;
        cin >> x >> y;
        
        cout << (x % y == 0 ? "YES" : "NO") << '\n';
    }
 
    return 0;
}
