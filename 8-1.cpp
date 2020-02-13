/* slozenost: O(n * m)
   n - velicina unosa
   m - broj metadata trenutnog cvora
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int y, total = 0, x = 0;
  vector<int> all;
  while (cin >> y) {
  	all.push_back(y);
  	x++;
  }

  int i = 0;
  while (x > 14) {
  	if (all[i] == 0) {
  		for (int j = 0; j < all[i+1]; ++j)
  		{
  			total += all[i + 2];
  			all.erase(all.begin() + i + 2);
  			x--;
  		}
  		all.erase(all.begin() + i + 1);
  		all.erase(all.begin() + i);
  		x -= 2;
  		i -= 2;
  		all[i]--;
  	} else i++;
  	if (x <= 14) for (int i = 2; i < x; ++i) total += all[i];;
  }

  cout << total;

  return 0;
}