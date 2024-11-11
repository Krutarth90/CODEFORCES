#include <bits/stdc++.h>
using namespace std;
#define int                                 long long
#define flp(k,n)                            for(int i=(int)k;i<(int)n;i++)
#define flm(k,n)                            for(int j=(int)n-1;j>=(int)k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"
 

void solve()
{
    int n, c = 0;
    cin >> n;
    vector<int> colour = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    map<int, int> ma;
    vector<bool> fl(11, 0);
    int ans[n];
    flp(0, n)
    {
        int x;
        cin >> x;
        for(int j = 0; j < 11; j ++)
        {
            if(x % colour[j])
                continue;
            if(!fl[j])
            {
                c ++;
                ma[j] = c;
                fl[j] = 1;
            }
            ans[i] = ma[j];   
            break;
        }
    }
    cout << c << endl;
    flp(0, n)
        cout << ans[i] << " ";
    NL;   
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
