#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n)                            for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n)                            for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"
#define SPACE                               << " " << 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds; 
  
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector <vector<ll>> dp(4e4 + 1, vector<ll>(502));
vector<int> palindromes;


void solve()
{
	int n;
	cin >> n;
	cout << dp[n][palindromes.size()] << endl;
}

bool is_palindrome(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == num;
}

signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    cin >> TC ;
	for (int i = 1; i <= 40000; i++) {
        if (is_palindrome(i)) {
            palindromes.push_back(i);
        }
    }
	flp(0, 4e4 + 1)
	{
		dp[i][0] = 0;
	}
	flp(0, 502)
		dp[0][i] = 1;
	for(int j = 0; j < palindromes.size(); j ++)
	{
		int x = palindromes[j];
		flp(1, 4e4 + 1)
		{
			if(x > i)
				dp[i][j + 1] = dp[i][j];
			else
				dp[i][j + 1] = (dp[i - x][j + 1] + dp[i][j]) % ((ll)1e9 + 7);
		}
	}
    while(TC--)
        solve() ;
}
