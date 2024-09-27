#include <bits/stdc++.h>
using namespace std;
#define flp(k,n)                            for(int i=k;i<n;i++)
#define flm(k,n)                            for(int j=n-1;j>=k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define int                                 long long
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"


vector<int> prime;
class solution
{
    public:
    static void seive (int l)
    {
        vector<bool> check(l + 1, true);
        check[0]=0;
        check[1]=0;
        for(int i = 2 ; i * i <=l ; i++)
        {
            if(check[i])
            {
                prime.pb(i);
                for(int j = i * i ; j<=l ; j+=i)
                    check[j]=0;
            }
        }
        for(int i=sqrt(l) + 1 ; i <=l ; i++)
            if(check[i])
                prime.pb(i);
    }

    static int MOD(int n)
    {
        if(n>=0)
            return n%((int)1e9 + 7) ;
        else
            return ((int)1e9 + 7) + n%((int)1e9 + 7) ;
    }
    
    static bool comp(pair<int,int>a,pair<int,int>b) 
    {
        if(a.first==b.first)
            return a.second>b.second;
        return a.first<b.first;
    }
    
    static int fact(int n)
    {
        int ans=1;
        while(n > 0)
        {
            ans*=n;
            n--;
        }
        return ans;
    }
    
    static void solve()
    {
        string s;
        cin >> s;
        int ans = INT_MAX, n = s.size();
        vector<int> freq(n);
        if(s[0] == '1')
            freq[0] = 1;
        else
            freq[0] = 0;
        if(n < 3)
        {
            cout << 0 << endl;
            return;
        }
        flp(1, n)
        {
            freq[i] = freq[i - 1];
            if(s[i] == '1')
                freq[i] ++;
        }
        flp(1, n)
        {
            if(s[i] == s[0])
                continue;
            int left_zero = i - freq[i - 1];
            int right_zero = n - 1 - i - (freq[n - 1] - freq[i]); 
            int left_one = freq[i - 1];
            int right_one = freq[n - 1] - freq[i];
            ans = min(ans, left_one + right_zero);
            ans = min(ans, left_zero + right_one);
            if(s[i] == '1')
                ans = min(ans, left_one + right_one + 1);
            else
                ans = min(ans, left_zero + right_zero + 1);
        }
        if(ans == INT_MAX)
            ans = 0;
        cout << ans << endl;
    }
};

signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC=1 ;
    cin>>TC ;
    while(TC--)
        solution::solve() ;
}
