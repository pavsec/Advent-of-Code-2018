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

  for (int k = 0; k < 1227; k++) {
  	int id, inch_left, inch_top, width, length;
  	scanf("#%d @ %d,%d: %dx%d\n", &id, &inch_left, &inch_top, &width, &length);
  	for (int i = inch_left; i < inch_left + width; ++i)
  	{
  		for (int j = inch_top; j < inch_top + length; ++j)
  		{
  			fabric[i][j]++;
  		}
  	}
  }
  int overlap = 0;

  for (int i = 0; i < MAX_SIZE; ++i)
  {
  	for (int j = 0; j < MAX_SIZE; ++j)
  	{
  		if (fabric[i][j] > 1) overlap++;
  	}
  }
  printf("%d\n", overlap);


  return 0;
}