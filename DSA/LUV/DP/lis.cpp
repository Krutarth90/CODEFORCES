#include<bits/stdc++.h>
using namespace std;

const int N = 1e10;
int a[N];

int lis (int k)
{
    int ans = 0;
    for(int i = k - 1; i >= 0; i --)
    {
        if(a[i] < a[k])
            ans = max(ans, lis(i) + 1);
    }
    return ans;
}

signed main()
{
    int n, ans = 1;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i];
        ans = max(ans, lis(i));
    }
    cout << ans << endl;
}