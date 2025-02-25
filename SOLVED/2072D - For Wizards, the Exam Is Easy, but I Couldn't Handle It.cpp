#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n)                            for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n)                            for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"
#define SPACE                               << " " << 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds; 
  
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;




void solve()
{
    ll n, av = 0, maxi = 0;
    cin >> n;
    vector<int> a(n), pref(n + 1, 0);
    pair<int, int> ap = {1, 1};
    flp(0, n)
    {
        cin >> a[i];
    }
    flp(0, n - 1)
    {
        pref[i + 1] = 0;
        maxi = i;
        for(int j = i + 1; j < n; j ++)
        {
            if(a[j] < a[i])
                pref[j + 1] = pref[j] + 1;
            else if(a[j] > a[i])
                pref[j + 1] = pref[j] - 1; 
            else
                pref[j + 1] = pref[j]; 
            if(pref[maxi] < pref[j + 1])
                maxi = j + 1;
        }
        if(av < pref[maxi])
        {
            av = pref[maxi];
            ap = {i + 1, maxi};
        }
    }
    cout << ap.first << " " << ap.second << endl;
}


signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    cin >> TC ;
    while(TC--)
        solve() ;
}
