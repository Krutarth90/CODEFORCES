#include<bits/stdc++.h>
using namespace std;
char s[110];
int main()
{
    int n,m;
	cin>>n>>m;
    scanf("%s",s+1);
    int l,r;
    char a,b;
    while (m--)
	{
        cin>>l>>r>>a>>b;
        for(int i = l;i <= r;i++)
		{
            if(s[i] == a) s[i] = b;
        }
    }
    printf("%s\n",s+1);
    return 0;
}
