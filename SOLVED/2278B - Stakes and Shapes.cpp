#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];

        string s = "PRS";

        int total = a[0] + a[1] + a[2];
        for(int i = 0; i < total; i++){
            cout << s[max_element(a.begin(), a.end()) - a.begin()];
        }

        cout << '\n';
    }

    return 0;
}
