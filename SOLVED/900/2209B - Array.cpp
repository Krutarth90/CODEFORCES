#include<bits/stdc++.h>
using namespace std;
int n,a[5009],bcnt,f1[5009],f2[5009];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i = 1; i <= n; i ++){
			scanf("%d",&a[i]);
		}
		for(int i = n; i >= 1; i --){
		    f1[i] = f2[i] = 0;
			for(int j = i + 1; j <= n; j ++)
			    f1[i] += (a[i] > a[j]),f2[i] += (a[i] < a[j]);
			f1[i] = max(f1[i],f2[i]);
		}
		for(int i = 1; i < n; i ++)
		    printf("%d ",f1[i]);
		printf("%d\n",f1[n]);
	}
}
