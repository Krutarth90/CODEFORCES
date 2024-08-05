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
        for(int i = 2 ; i<=l ; i++)
        {
            if(check[i])
            {
                prime.pb(i);
                for(int j = i * i ; j<=l ; j+=i)
                {
                    check[j]=0;
                }
            }
        }
    }

    static int MOD(int n)
    {
        if(n>=0)
            return n%((int)1e9 + 7) ;
        else
            return ((int)1e9 + 7) + n%((int)1e9 + 7) ;
    } 

    static void solve()
    {
        int n, m=0, value=-1 ;
        cin>>n ;
        int temp=n;
        for(int i = 2; i * i <= n; i++)
        {
            int c=0;
            while(n % i == 0)
            {
                c++;
                n /= i;
            }
            if(c>m)
            {
                m=c ;
                value=i ;
            }
        }
        if(value == -1)
        {
            cout << 1 << endl << temp << endl;
            return;
        }
        cout << m << endl ;
        flp(0,m-1)
            cout << value << ' ' ;
        cout<< temp/(int)(pow(value, m-1)) << endl;
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