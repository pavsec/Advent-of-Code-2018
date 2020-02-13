/* slozenost: O(n)
   n - broj elemenata u inputu
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
  int elements = 0;

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

  cout << elements;


  return 0;
}