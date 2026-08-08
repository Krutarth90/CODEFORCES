#include <cstdio>
#include <cstring>
const int N = 105;
char str[N];
void solve() {
    scanf("%s", str + 1);
    int n = strlen(str + 1);
    bool c0 = 0, c1 = 0;
    for (int i = 1; i <= n; i++) {
        if (!c0 && str[i] == '0') {
            c0 = true;
            continue;
        }
        if (!c1 && str[i] == '1') {
            c1 = true;
            continue;
        }
        putchar(str[i]);
    }
    puts("");
}
int main() {
    int t = 0;
    scanf("%d", &t);
    while (t--) solve();
    return 0;
}
