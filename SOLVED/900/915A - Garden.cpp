#include <iostream>
#include <climits>

#define inf INT_MAX

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,k,time = inf;     
	cin >> n >> k;
	
	int arr[101];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	for(int i = 0; i < n; i++){
	    
		if(k % arr[i] == 0 && k / arr[i] < time){
		   time = k / arr[i];	
		}	
		
	}

	cout << time << endl;
	return 0;
}
