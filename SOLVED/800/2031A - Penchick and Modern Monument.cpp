#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007
 
int main() 
{
    FIO;
    ll t,n,k,i,j,m;
    cin >> t;
    while(t--){
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        int ans=0;
        for(i=0;i<n;i++){
            cin>>j;
            mp[j]++;
            ans=max(ans,mp[j]);
        }
        cout<<n-ans<<"\n";
    }
    return 0;
}
