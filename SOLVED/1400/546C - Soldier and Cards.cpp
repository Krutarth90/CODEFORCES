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
    int n;
    cin >> n;
    int k;
    cin >> k;
    deque<int> q1, q2;
    flp(0, k)
    {
        int x;
        cin >> x;
        q1.pb(x);
    }
    cin >> k;
    flp(0, k)
    {
        int x;
        cin >> x;
        q2.pb(x);
    }
    int c = 0;
    while(c <= 106)
    {
        c ++;
        if(q1.front() < q2.front())
        {
            int val = q1.front();
            q1.pop_front();
            q2.pb(val);
            val = q2.front();
            q2.pb(val);
            q2.pop_front();
        }
        else
        {
            int val = q2.front();
            q2.pop_front();
            q1.pb(val);
            val = q1.front();
            q1.pb(val);
            q1.pop_front();
        }
        if(q1.empty())
        {
            cout << c << " 2" << endl;
            return;
        }
        if(q2.empty())
        {
            cout << c << " 1" << endl;
            return;
        }
    }
    cout << -1 << endl;

}


 
signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    //cin >> TC ;
    while(TC--)
        solve() ;
}
