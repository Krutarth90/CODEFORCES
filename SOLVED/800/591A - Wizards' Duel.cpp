#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>

#define ll long long
#define inf 1e9
#define eps 1e-10
#define md
#define N
using namespace std;

int main()
{
	double len,a,b;
	scanf("%lf%lf%lf",&len,&a,&b);
	printf("%lf\n",len*(a/(a+b)));
	return 0;
}
 
