/* slozenost: O(k * a * b)
   k - broj unosa
   a - sirina dijela tkanine koja je 'zauzeta'
   b - visina dijela tkanine koja je 'zauzeta'
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 1000

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<int>> fabric(MAX_SIZE, vector<int>(MAX_SIZE, 0));
  char s[30];
  int all[1227][5], z = 0;

  for (int k = 0; k < 1227; k++) {
  	int id, inch_left, inch_top, width, length;
  	scanf("#%d @ %d,%d: %dx%d\n", &id, &inch_left, &inch_top, &width, &length);
    all[z][0] = id;
    all[z][1] = inch_left;
    all[z][2] = inch_top;
    all[z][3] = width;
    all[z][4] = length;
  	for (int i = inch_left; i < inch_left + width; ++i)
  	{
  		for (int j = inch_top; j < inch_top + length; ++j)
  		{
  			fabric[i][j]++;
  		}
  	}
    z++;
  }

  int overlap;
  for (int k = 0; k < 1227; k++) {
    overlap = 0;
    for (int i = all[k][1]; i < all[k][1] + all[k][3]; ++i)
    {
    	for (int j = all[k][2]; j < all[k][2] + all[k][4]; ++j)
    	{
    		if (fabric[i][j] > 1) overlap++;
    	}
    }
    if (overlap == 0) {
      overlap = all[k][0];
      printf("%d\n", all[k][0]);
      break;
    }
  }

  return 0;
}