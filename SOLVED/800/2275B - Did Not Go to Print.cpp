#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

int main() {
    int t;
    cin >> t;
    while (t --> 0) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> stack_;
        vector<bool> used(n);
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                stack_.push_back(i);
            } else if (s[i] == '2') {
                if (stack_.empty()) {
                    used[i] = true;
                } else {
                    used[stack_.back()] = true;
                    stack_.pop_back();
                }
            } else {
                used[i] = true;
            }
        }
        vector<int> res;
        for (int i = 0; i < n; ++i) {
            if (!used[i]) {
                res.push_back(i + 1);
            }
        }
        cout << res.size() << '\n';
        for (auto &x : res) {
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}
