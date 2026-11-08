#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define int ll

const ll N = 1e5 + 5, mod = 1e9 + 7;
int test_case = 1;

void master() {
    int n,a,b,x;
    cin >> n >> a >> b;
    vector<int>v(n,2);
    while (a--){
        cin >> x;
        v[x-1] = 1;
    }
    while (b--)cin >> x;
    for(auto i:v)
        cout << i << ' ';
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //cin >> test_case;
    while (test_case--) {
        master();
        if (test_case)
            cout << '\n';
    }
}
