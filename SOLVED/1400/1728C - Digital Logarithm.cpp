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

// HARD SOLUTION
void solve()
{
    int n, ans = 0;
    cin >> n;
    map<int, int> ma1, ma2, logMa1, logMa2;

    flp(0, n)
    {
        int x;
        cin >> x;
        ma1[x] ++;
        logMa1[(int) log10(x) + 1] ++;
    }

    flp(0, n)
    {
        int x;
        cin >> x;
        if(ma1[x] > 0)
        {
            ma1[x] --;
            logMa1[(int) log10(x) + 1] --;
            if(!ma1[x])
                ma1.erase(x);
            if(!logMa1[(int) log10(x) + 1])
                logMa1.erase((int) log10(x) + 1);
            continue;
        }
        else
        {
            ma1.erase(x);
        }
        ma2[x] ++;
        logMa2[(int) log10(x) + 1] ++;
    }

    for(auto [x, y] : ma1)
    {
        if(x > 9)
            break;
        if(x == 1)
            continue;
        if(logMa2[x] > y)
        {
            ans += y;
            logMa2[x] -= y;
            logMa1.erase((int) log10(x) + 1);
        }
        else
        {
            ans += logMa2[x];
            y -= logMa2[x];
            logMa2.erase(x);
            ans += y;
            logMa1.erase((int) log10(x) + 1);
        }
        ma1[x] = 0;
    }

    for(auto [x, y] : ma2)
    {
        if(x == 1)
            continue;
        if(x > 9)
            break;
        if(logMa1[x] > y)
        {
            ans += y;
            logMa1[x] -= y;
            logMa2.erase((int) log10(x) + 1);
        }
        else
        {
            ans += logMa1[x];
            y -= logMa1[x];
            logMa1.erase(x);
            ans += y;
            logMa2.erase((int) log10(x) + 1);
        }
        ma2[x] = 0;
    }

    for(auto [x, y] : logMa1)
    {
        if(x == 1)
            continue;
        if(logMa2[x] > y)
        {
            logMa2[x] -= y;
            ans += (2 * y);
            logMa1[x] = 0;
        }
        else
        {
            ans += (2 * y);
            logMa1[x] -= logMa2[x];
            logMa2.erase(x);
        }
    }

    for(auto [x, y] : logMa2)
    {
        if(x == 1)
            continue;
        if(logMa1[x] > y)
        {
            logMa1[x] -= y;
            ans += (2 * y);
            logMa2[x] = 0;
        }
        else
        {
            ans += (2 * y);
            logMa2[x] -= logMa1[x];
            logMa1.erase(x);
        }
    }
    
    cout << ans << endl;
    
}

//EASY SOLUTION
void solve2()
{
    int n, ans = 0;
    cin >> n;
    priority_queue<int> a, b;
    flp(0, n)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    flp(0, n)
    {
        int x;
        cin >> x;
        b.push(x);
    }
    
    while(a.size())
    {
        if(a.top() == b.top())
        {
            a.pop();
            b.pop();
            continue;
        }
        
        ans ++;

        if(a.top() > b.top())
        {
            a.push(log10(a.top()) + 1);
            a.pop();
        }
        else
        {
            b.push(log10(b.top()) + 1);
            b.pop();
        }
    }
    
    cout << ans << endl;
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
