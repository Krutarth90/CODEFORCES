#include <iostream>
 
using namespace std;
 
const int RED = 2400;
 
int main() {
    int n;
    cin >> n;
    bool good = false;
    for (int i = 0; i < n; i++) {
        string handle;
        int before, after;
        cin >> handle >> before >> after;
        if (before >= RED && after > before) {
            good = true;
            break;
        }
    }
 
    if (good) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}
