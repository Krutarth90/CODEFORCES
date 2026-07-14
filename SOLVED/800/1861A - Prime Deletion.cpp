#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		if(s.find("1") < s.find("3"))
			cout << 13;
		else
			cout << 31;
		cout << endl;
	}
}
