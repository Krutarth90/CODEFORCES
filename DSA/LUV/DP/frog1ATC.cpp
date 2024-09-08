#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int h[N];
int dp[N];

int frog(int n)
{
    if(n == 0)
        return 0;
    if(dp[n] != -1)
        return dp[n];
    if(n == 1)
        return frog(n - 1) + abs(h[n] - h[n - 1]);
    return dp[n] = min(frog(n - 1) + abs(h[n] - h[n - 1]), frog(n - 2) + abs(h[n] - h[n - 2]));     
}



signed main()
{
    int n;
    cin >> n;
    memset(dp, -1, );
    for(int i = 0; i < n; i ++)
        cin >> h[i];
    cout << frog(n - 1) << endl;
}