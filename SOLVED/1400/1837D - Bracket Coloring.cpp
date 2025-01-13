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
    int n, balance = 0, c = 0;
    cin >> n;
    string s;
    cin >> s;
    if(n % 2)
    {
        cout << -1 << endl;
        return;
    }
    stack<pair<char, int>> st;
    vector<int> ans(n, 1), rev;
    flp(0, n)
    {
        if(s[i] == '(')
        {
            c ++;
            if(balance)
            {
                balance --;
                rev.pb(i);
            }
            else
            {
                st.push({'(', i});
            }
        }
        else
        {
            c --;
            if(st.empty())
            {
                balance ++;
                rev.pb(i);
            }
            else
            {
                st.pop();
            }
        }
    }
    if(c)
    {
        cout << -1 << endl;
        return;
    }
    if(rev.size() == n || !rev.size())
    {
        cout << 1 << endl;
        flp(0, n)
            cout << 1 << " ";
        NL;
        return;
    }
    for(auto x : rev)
        ans[x] = 2;
    
    cout << 2 << endl;
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
