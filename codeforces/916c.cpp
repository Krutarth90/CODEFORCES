#include <map>
#include <set>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
typedef double db; 
typedef long long ll;
typedef unsigned long long ull;
const int N=1000010;
const int LOGN=28;
const ll  TMD=0;
const ll  INF=2147483647;
int  T,n;
char a[3][N];

int main()
{
	scanf("%d",&T);
	while(T--)
	{
    	        scanf("%d",&n);
		for(int i=1;i<=2;i++)
		{
		    scanf("\n");
			for(int j=1;j<=n;j++)
				scanf("%c",&a[i][j]);
		}
		int min_down=n,min_down=1;
		for(int i=n;i>=2;i--)
			if(a[1][i]=='1'&&a[2][i-1]=='0') min_down=i-1;
		for(int i=1;i<min_down;i++)
			if(a[2][i]=='1'&&a[1][i+1]=='0') min_down=i+1;
		for(int i=1;i<=min_down;i++) printf("%c",a[1][i]);
		for(int i=min_down;i<=n;i++) printf("%c",a[2][i]);
		printf("\n");
		printf("%d\n",min_down-min_down+1);
	}
	
	return 0;
}