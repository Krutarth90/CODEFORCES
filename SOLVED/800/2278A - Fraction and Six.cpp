#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, m;
        string p, q;
        cin >> n >> m >> p >> q;

        q += "six";

        vector<int> pc(255, 0), qc(255, 0);
        for(auto& z : p) pc[z]++;
        for(auto& z : q) qc[z]++;

        if(pc == qc) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
