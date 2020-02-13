/*slozenost: O(x)
  x - broj unosa
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int sum = 0;
  char num[10];
  while(cin >> num) {
      int n = stoi(num);
      sum += n;
  }

  cout << sum;

  return 0;
}