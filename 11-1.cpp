/* slozenost: O(n * n * m * m)
   n - velicina cijelog polja (300)
   m - velicina polja kojem racunamo max snagu (3)
*/

#include <bits/stdc++.h>

using namespace std;

#define SIZE 300

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector< vector<int> > arr(SIZE, vector<int>(SIZE, 0));

  for (int i = 0; i < SIZE; ++i)
  {
  	for (int j = 0; j < SIZE; ++j)
  	{
  		int x = i + 1, y = j + 1, z = 0;
  		
  		z = ( (x + 10) * y + n ) * (x + 10);
  		z /= 100;
  		z %= 10;
  		z -= 5;
  		arr[i][j] = z;  		
  	}
  }

  int x, y, MAXpower = -300;

  for (int i = 0; i < SIZE - 3; ++i)
  {
  	for (int j = 0; j < SIZE - 3; ++j)
  	{
  		int power = 0;
  		for (int k = i; k < i + 3; ++k)
  		{
  			for (int l = j; l < j + 3; ++l)
  			{
  				power += arr[k][l]; 
  			}
  		}
  		if (power > MAXpower) {
  			x = i + 1;
  			y = j + 1;
  			MAXpower = power;
  		}
  	}
  }

  cout << x << "," << y;

  return 0;
}