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
    string s, t;
    vector<int> m1(26, 0), m2(26, 0);
    cin >> s;
    cin >> t;
    flp(0, s.size())
        m1[s[i] - 'a'] ++;
    flp(0, t.size())
        m2[t[i] - 'a'] ++;
    bool f = 0, tree = 0;
    
    flp(0, s.size())
    {
        if(s[i] == t[0])
        { 
            f = 1;

            for(int j = 0, l = 0; l < t.size() && f; j ++)
            {
                if(j + i >= s.size())
                {
                    f = 0;
                    break;
                }
                if(s[i + j] == t[l])
                    l ++;
            }
            if(f)
            {
                cout << "automaton" << endl;
                return;
            }
        }
    }
    flp(0, 26)
    {
        if(m2[i] != m1[i])
        {
            f = 1;
        }
        if(m2[i] > m1[i])
        {
            tree = 1;
        }
    }   
    if(tree)
    {
        cout << "need tree" << endl;
        return;
    }
    if(!f)
    {
        cout << "array" << endl;
        return;
    }
    cout << "both" << endl;
    
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
