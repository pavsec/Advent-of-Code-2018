/* slozenost: O(a * b * b)
   a - broj unosa
   b - duzina stringa
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char s[30];
  int two = 0, three = 0;
  while (cin >> s) {
  	int check2 = 0, check3 = 0;
  	int l = strlen(s);
  	for (int i = 0; i < l; i++) {
  		int x = 1;
  		for (int j = i + 1; j < l; ++j)
  		{
  			if (s[i] == s[j] && s[j] != '_') {
  				x++;
  				s[j] = '_';
  			}
  		}

  		if (x == 2 && check2 == 0) {
  			two++;
  			check2++;
  		}
  		else if (x == 3 && check3 == 0) {
  			three++;
  			check3++;
  		}
  	}
  }

  cout << two * three;

  return 0;
}