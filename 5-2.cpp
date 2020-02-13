/* slozenost: O(n * m)
   n - broj elemenata u inputu
   m - broj slova u eng abecedi
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //65 - A, 90 - Z
  //97 - a, 122 - z
  stack<char> all;
  char c, curr, prev;
  char optimized[9060];
  int elements = 0;
  int k = 0;

  while (cin >> c) {
  	all.push(c);
  	elements++;
  	if (elements > 1) {
  		curr = all.top();
  		all.pop();
  		prev = all.top();
  		if (curr == prev + 32 || curr == prev - 32) {
  			elements -= 2;
  			all.pop();
  		} else {
  			all.push(curr);
  		}
  	}
  }

  while (!all.empty()) {
    optimized[k] = all.top();
    k++;
    all.pop();
  }

  int slova[26];
  char a = 'A';
  for (int i = 0; i < 26; ++i)
  {
    slova[i] = 0;
    stack<char> s;
    for (int j = 0; j < elements; ++j)
    {
      if (optimized[j] != a && optimized[j] != a + 32) {
        s.push(optimized[j]);
        slova[i]++;
        if (slova[i] > 1) {
          curr = s.top();
          s.pop();
          prev = s.top();
          if (curr == prev + 32 || curr == prev - 32) {
            slova[i] -= 2;
            s.pop();
          } else {
            s.push(curr);
          }
        }
      }
    }
    while (!s.empty()) {
      s.pop();
    }
    a += 1;
  }

  int min = elements, index;
  for (int i = 0; i < 26; ++i)
  {
    if (slova[i] < min) {
      min = slova[i];
      index = i;
    }  
  }

  cout << slova[index];

  return 0;
}