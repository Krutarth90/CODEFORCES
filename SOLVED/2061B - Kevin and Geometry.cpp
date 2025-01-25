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
#define SPACE                               << " " << 


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> ma;
    set<int> se;
    flp(0, n)
    {
        cin >> a[i];
        ma[a[i]] ++;
        if(ma[a[i]] == 2)
            se.insert(a[i]);
    }
    sort(a.begin(), a.end());

    for(auto x : se)
    {
        if(ma[x] >= 4)
        {
            flp(0, 4)
                cout << x << " ";
            NL;
            return;
        }
        bool f = ma[x] - 2;
        flp(1, n)
        {
            if(a[i] == x && a[i - 1] == x)
                continue;
            if(a[i - 1] == x)
            {
                if(!f)
                {
                    if((i - 3 >= 0) && a[i] - a[i - 3 - f] < 2 * x)
                    {
                        cout << x << " " << x << " " << a[i] << " " << a[i - 3 - f] << endl;
                        return;
                    }
                    else
                    {
                        continue;
                    }
                }
                
            }
            if(a[i] == x && !f)
                continue;
            
            if(a[i] - a[i - 1] < 2 * x)
            {
                cout << x << " " << x << " " << a[i] << " " << a[i - 1] << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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
