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
    int n, l, r;
    priority_queue<int> b, m, a, c;
    cin >> n >> l >> r;
    flp(0, n)
    {
        int x;
        cin >> x;
        if(i + 1 < l)
            b.push(-x);
        else if(i < r)
        {
            m.push(x);
            c.push(x);
        }
        else
            a.push(-x);   
    }
    while(!b.empty() && (0 < m.top() + b.top() ))
    {
        m.pop();
        m.push(-b.top());
        b.pop();
    }
    int ans1 = 0, ans2 = 0;
    while(!m.empty())
    {
        ans1 += m.top();
        m.pop();
    }
    while(!a.empty() && (0 < c.top() + a.top() ))
    {
        c.pop();
        c.push(-a.top());
        a.pop();
    }
    while(!c.empty())
    {
        ans2 += c.top();
        c.pop();
    }
    cout << min(ans1, ans2) << endl;

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
