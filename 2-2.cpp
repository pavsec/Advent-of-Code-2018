/* slozenost: O(a * a * b)
   a - broj unosa
   b - duzina stringa
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char s[30];
  int k = 0;
  char all[MAX][30];
  while (cin >> s) {
    int check = 0;
  	for (int i = 0; i < strlen(s); i++) {
      all[k][i] = s[i];
    }
    k++;
    for (int i = 0; i < k; i++) {
      check = 0;
      int diff[30] = { 0 };
      for (int j = 0; j < strlen(s); j++) {
        if (all[i][j] != all[k-1][j]) {
          check++;
          diff[j] = 1;
        }
        if (check > 1) break;
      }
      if (check == 1) {
        for (int i = 0; i < strlen(s); i++) {
          if (diff[i] == 0) cout << all[k-1][i];
        }
        break;
      }
    }
    if (check == 1) break;
  }

  return 0;
}