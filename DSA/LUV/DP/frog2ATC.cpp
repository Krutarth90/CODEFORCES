#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int h[N], dp[N];

int frog(int i, int k)
{
    if(i == 0)
        return 0;
    if(dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;
    for(int j = i - 1; j >= 0 && (i - j <= k) ; j --)
    {
        if(dp[j] != -1)                 
            cost = min(cost, dp[j] + abs(h[j] - h[i]));
        else
        {
            dp[j] = frog(j, k);
            cost = min(cost, dp[j] + abs(h[j] - h[i]));
        }
            
    }
    return dp[i] = cost ;
}

signed main()
{
    int n, k;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    for(int i = 0; i < n; i ++)
    {
        cin >> h[i];
    }
    cout << frog(n - 1, k) << endl;
}