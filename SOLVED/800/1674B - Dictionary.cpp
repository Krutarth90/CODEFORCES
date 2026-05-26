#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    string w = "aa";
    map<string, int> idx;
    int i = 1;
    for(w[0] = 'a'; w[0] <= 'z'; w[0]++)
        for(w[1] = 'a'; w[1] <= 'z'; w[1]++)
            if(w[0] != w[1])
                idx[w] = i++;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        cout << idx[s] << endl;
    }   
}
