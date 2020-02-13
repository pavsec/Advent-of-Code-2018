/* slozenost: O(a * a * b * x)
   a - broj slova eng abecede = 26
   b - velicina unosa = 101
   x - trenutna velicina polja u kojem se nalazi konacno rjesenje
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector< pair<char, char> > v;
  char answer[26];
  for (int i = 0; i < 101; ++i)
  {
    char fin, curr;
    scanf("Step %c must be finished before step %c can begin.\n", &fin, &curr);
    v.push_back(make_pair(fin, curr));
  }

  char first;
  vector<char> all;
  int x = 0;

  for (int j = 65; j <= 90; ++j)
  {
    int check = 0;
    for (int k = 0; k < 101; ++k)
    {
      if (j == v[k].second) {
        check++;
        break;
      }
    }
    if (check == 0) {
      all.push_back(j);
      x++;
      if (x == 1) j = 100;
    }
  }

  

  for (int n = 0; n < 25; n++) {
    for (int j = 65; j <= 90; ++j)
    {
      int c = 0;
      for (int i = 0; i < x; i++) {
        if (j == all[i]) c++;
      }
      if (c>0) continue;
      
      int check = 0, f = 0, ff = 0;
      for (int k = 0; k < 101; ++k)
      {
        if (j == v[k].second) {
          f++;
          for (int m = 0; m < x; ++m)
          {
            if (v[k].first == all[m]) {
              ff++;
              break;
            }
          }
        }
      }
      if (ff == f) {
        all.push_back(j);
        x++;
        break;        
      }     
    } 
  }  

  for (int i = 0; i < x; ++i)
  {
    printf("%c", all[i]);
  }


  return 0;
}