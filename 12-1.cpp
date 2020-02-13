/* slozenost: O(a * b * c)
   a - broj generacija (20)
   b - velicina polja s vazama (200)
   c - broj uvjeta na pocetku (32)
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char pots[200], curr[200];
  int x = 0;
  string s, initial, help;
  getline(cin, s);
  initial = s.substr(15, s.length());
  for (int i = 0; i < 200; ++i)
  {
  	if (i < 50) pots[i] = '.';
  	else if (i >= 150) pots[i] = '.';
  	else { 
  		pots[i] = initial[x];
  		x++;
  	}
  	curr[i] = pots[i];
  }
  map<string, char> next_gen;

  getline(cin, s);
  while (cin) {
  	help = s.substr(0, 5);
  	next_gen[help] = s[s.length() - 1];
  	getline(cin, s);
  }
  
  for (int i = 0; i < 20; ++i)
  {
  	for (int j = 2; j < 198; ++j)
  	{
  		help = {pots[j - 2], pots[j - 1], pots[j], pots[j + 1], pots[j + 2]};

  		for (auto y : next_gen) {
			if (help == y.first) {
				curr[j] = y.second;
			}
  		}
  	}
  	for (int j = 0; j < 200; j++) {
		pots[j] = curr[j];
  	}
  }

  int j = - 50, sum = 0;
  for (int i = 0; i < 200; ++i)
  {
  	if (pots[i] == '#') sum += j;
  	j++;
  }

  cout << sum;

  return 0;
}