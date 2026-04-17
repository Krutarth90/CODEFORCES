#include <iostream>

using namespace std;

int matrix[5][5] = {0};

int main() {
  for (int i = 1, times; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
      cin >> times;
      if (times % 2 == 1) {
        matrix[i-1][j] ^= 1;
        matrix[i][j-1] ^= 1;
        matrix[i+1][j] ^= 1;
        matrix[i][j+1] ^= 1;
        matrix[i][j] ^= 1;
      }
    }
  }
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
      cout << !matrix[i][j];
    }
    cout << endl;
  }
}
