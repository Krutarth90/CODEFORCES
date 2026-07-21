#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n+2);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int pivot;
    cin >> pivot;
 
    arr[0] = arr[n+1] = arr[pivot];
 
    int countL = 0, countR = 0;
    for (int i = 0; i < pivot; i++) {
        if (arr[i] != arr[i+1]) {
            countL++;
        }
    }
    for (int i = pivot; i < n+1; i++) {
        if (arr[i] != arr[i+1]) {
            countR++;
        }
    }
 
    cout << max(countL, countR) << "\n";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
