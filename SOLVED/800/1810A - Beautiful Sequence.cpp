#include<bits/stdc++.h>
using namespace std;
int a[100005];
void solve()
{
    int n;
    scanf("%d",&n);
    for(int i  =1;i <= n;i++) scanf("%d",&a[i]);
    for(int i = 1;i <= n;i++) {
        if(a[i] <= i) {
            puts("YES");
            return;
        }
    }
    puts("NO");
}
int main()
{
    int t;scanf("%d",&t);
    while(t--) solve();
}
