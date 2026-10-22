#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >>n ;
	vector <string> a(10);
	a[0] = "O-|-OOOO";
	a[1] = "O-|O-OOO";
	a[2] = "O-|OO-OO";
	a[3] = "O-|OOO-O";
	a[4] = "O-|OOOO-";
	a[5] = "-O|-OOOO";
	a[6] = "-O|O-OOO";
	a[7] = "-O|OO-OO";
	a[8] = "-O|OOO-O";
	a[9] = "-O|OOOO-";
	if (!n)
		cout << a[n];
	while (n)
	{
		cout << a[n%10] << "\n";
		n /= 10;

	}



}
