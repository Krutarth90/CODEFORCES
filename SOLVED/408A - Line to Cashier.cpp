#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
    int n, k[105], m, t;
    double min;
    min=100e101;
    cin>>n;
    for(int i=0; i<n; i++) cin>>k[i];
    for(int i=0; i<n; i++) {
        t=0;
        for(int j=0; j<k[i]; j++) {
            cin>>m;
            t+=m*5;
            t+=15;
        }
        if(t<min) min=t;
    }
    cout<<min;
    return 0;
}
