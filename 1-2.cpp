/* slozenost: O(a * b * c)
   a - broj puta izvrsavanja druge while petlje dok se ne pronadje rjesenje
   b - velicina vektora all
   c - velicina vektora frequency
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int sum = 0, x = 0; 
  vector<int> frequency, all;
  frequency.push_back(0);
  all.push_back(0);
  char num[10];
  while(cin >> num) {
      int n = stoi(num);
      sum += n;
      for (int i = 0; i < frequency.size(); ++i)
      { 
        if (frequency[i] == sum) {
          x = 1;
          break;
        }
      }
      if (x) break;
      frequency.push_back(sum);
      all.push_back(n);
  }
  while (!x) {
    for (int i = 1; i < all.size(); i++) {
      sum += all[i];
      for (int i = 0; i < frequency.size(); ++i)
      { 
        if (frequency[i] == sum) {
          x = 1;
          break;
        }
      }
      if (x) break;
      frequency.push_back(sum);
    }
  }

  cout << sum;

  return 0;
}