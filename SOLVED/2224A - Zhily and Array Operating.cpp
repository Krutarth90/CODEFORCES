#include<bits/stdc++.h>
 
using namespace std;
int T;
int n,ans;
long long a[2000005];
vector<int> ANS;
int main(){
    scanf("%d",&T);
    while(T--){
        ANS.clear();
        ans=0;
        scanf("%d",&n);
        for(int i=1;i<=n;++i)scanf("%lld",&a[i]);
        for(int i=n-1;i>=1;--i){
            if(a[i+1]>0){
                ANS.push_back(i);
                a[i]+=a[i+1];
            }
        }
        for(int i=1;i<=n;++i)if(a[i]>0)ans++;
        printf("%d\n",ans);
    }
}
