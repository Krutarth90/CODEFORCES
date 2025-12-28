#include<iostream>
#include<cassert>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;cin>>T;
	for(;T--;)
	{
		int N,K;
		cin>>N>>K;
		int cnt=0;
		for(int t=N;t>=1;t--)for(int j=t==N?1:2;j--;)if(K>0)K-=t,cnt++;
		cout<<cnt<<"\n";
	}
}
