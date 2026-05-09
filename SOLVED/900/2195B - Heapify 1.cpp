#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
  cin.tie(0)->sync_with_stdio(0);
  int t;cin>>t;
  while(t--)
  {
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
    }
    for(int i=1;i<=n;i+=2)
    {
      for(int j=i;j<=n;j*=2)
      {
        for(int k=i*2;k<=n;k*=2)
        {
          if(a[k/2]>a[k])swap(a[k/2],a[k]);
        }
      }
    }
    if(is_sorted(begin(a),end(a)))cout<<"YES\n";
    else cout<<"NO\n";
  }
}
