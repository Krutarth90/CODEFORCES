#include<bits/stdc++.h>
using namespace std;
#define flp(k,n) for(int i=k;i<n;i++)
#define flm(k,n) for(int j=n-1;j>=k;j--)
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

bool isprime(int n)
{
    int c=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
        if(c)
            return false;
    }
    return true;
}
int main()
{
    bool f=true;
    int n,m;
    cin>>n>>m;
    if(isprime(n) && isprime(m))
    {
        for(int i=n+1;i<m;i++)
        {
            if(isprime(i))
            {
                NO;
                return 0;
            }
        }
        YES;
        return 0;
    }
    NO;  
}
