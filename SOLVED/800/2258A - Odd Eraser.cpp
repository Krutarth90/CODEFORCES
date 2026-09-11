#include <bits/stdc++.h>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int TT;
    std::cin >> TT;
    
    while (TT--) {
        int N;
        std::cin >> N;
        
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }
        
        int ans = std::gcd(A[0], A[N - 1]);
        
        std::cout << ans << '\n';
    }

    return 0;
}
