#include<iostream>
using namespace std;
int t,n;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		bool ans=false;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x==100)
			 ans=true;
		}
		if(ans)
		 cout<<"Yes"<<endl;
		else
		 cout<<"No"<<endl;
	}
}
