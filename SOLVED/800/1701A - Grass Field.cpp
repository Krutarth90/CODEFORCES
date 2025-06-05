#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int z=0;
        int one=0;

        int x;
        for(int i=0;i<4;i++)
        {
            cin>>x;
            if(x==1)
                one++;
            else
                z++;
        }
        if(z==4)
            cout<<0<<endl;
        else if(one==4)
            cout<<2<<endl;
        else
            cout<<1<<endl;

    }
}
