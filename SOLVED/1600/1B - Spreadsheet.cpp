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
    string s;
    cin >> s;
    if(s[0] == 'R')
    {
        string col = "", row = "";
        bool f = 0;
        flp(1, s.size())
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                if(!f)
                    row += s[i];
                else
                    col += s[i];
            }
            else if(s[i] != 'C')
                goto label;
            else if(!f)
            {
                if(i == 1)
                    goto label;
                f = 1;
            }
               
        }
        if(!col.size())
            goto label;
        ll c = stoi(col);       
        col = "";
        while(c)
        {
            c --;
            col += ('A' +  ((c) % 26));
            c /= 26;
        }
        reverse(col.begin(), col.end());
        cout << col << row << endl;
    }
    else
    {
        label:
        bool f = 0;
        string row = "", col = "";
        flp(0, s.size())
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                f = 1;
            }
            if(!f)
            {
                col += s[i];
            }
            else
                row += s[i];
        }
        ll c = 0, pow = 1;
        flm(0, col.size())
        {   
            c += pow*(col[j] - 'A' + 1);
            pow *= 26;
        }
        cout << "R" << row << "C" << c << endl;
    }
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
