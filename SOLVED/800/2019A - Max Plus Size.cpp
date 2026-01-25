#include<bits/stdc++.h>
using namespace std;
const int N=110;
int T,n,a[110];
int calc(int x){
	if(x<=0)return 0;
	return (x+1)/2;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int ans=0;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]+calc(i-2)+calc(n-i-1));
		}
		cout<<ans+1<<"\n";
	}
	return 0;
}
