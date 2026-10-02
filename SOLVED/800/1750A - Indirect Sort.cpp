#include<bits/stdc++.h>
using namespace std;
int t,n,a[109];
inline int read(){
    int s = 0,w = 1;
    char ch = getchar();
    while (ch > '9' || ch < '0'){ if (ch == '-') w = -1; ch = getchar();}
    while (ch <= '9' && ch >= '0') s = (s << 1) + (s << 3) + (ch ^ 48),ch = getchar();
    return s * w;
}
int main(){
    t = read();
    while (t --){
        n = read();
        for (int i = 1;i <= n;i += 1) a[i] = read();
        puts(a[1] == 1 ? "Yes" : "No");
    }
    return 0;
}
