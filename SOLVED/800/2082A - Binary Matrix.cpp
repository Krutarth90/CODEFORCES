#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a[100];
int main()
{
	int t;cin>>t;
	while(t--){
		int n,m,ans=0;
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		int now=0;
		for(int i=0;i<n;i++){
			int tmp=0;
			for(int j=0;j<m;j++) tmp^=a[i][j]-'0';
			now+=tmp;
		}
		ans=now;
		now=0;
		for(int j=0;j<m;j++){
			int tmp=0;
			for(int i=0;i<n;i++) tmp^=a[i][j]-'0';
			now+=tmp;
		}
		ans=max(ans,now);
		cout<<ans<<'\n';
	}
}
