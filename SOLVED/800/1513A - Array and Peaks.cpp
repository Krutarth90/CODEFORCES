#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tests;
     cin>>tests;
     while(tests--)
     {
         int n,k;
         cin>>n>>k;
         vector<int> ans(n+1);
         int num=n;
         for(int i=2;i<n;i+=2)
         {
              if(k==0)break;
              ans[i]=num--;
              k--;
         }
         if(k)
         {
             cout<<-1<<endl;
             continue;
         }
         int cur=1;
         for(int i=1;i<=n;i++)
         {
             if(!ans[i])
             ans[i]=cur++;
         }

         for(int i=1;i<=n;i++)
         cout<<ans[i]<<" ";
         cout<<endl;
     }
}
