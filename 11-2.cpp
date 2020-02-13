/* slozenost: O(n * n * n * m * m)
   n - velicina cijelog polja 
   m - velicina polja kojem racunamo max snagu 
*/

#include <bits/stdc++.h>

using namespace std;

#define SIZE 300

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int arr[300][300];

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

  int x = 0, y = 0, max_power = -100000;
  int power = 0, s = 0, max_s;

  for (int m = 3; m < 300; ++m)
  { 
   for (int i = 0; i < 300 - m; ++i)
    {
    	for (int j = 0; j < 300 - m; ++j)
    	{
        power = 0;
    		for (int k = 0; k < m; ++k)
    		{
    			for (int l = 0; l < m; ++l)
    			{
    				power += arr[i+k][l+j]; 
    			}
    		}

        if (power > max_power) {
            max_power = power;
            max_s = m;
            x = i + 1;
            y = j + 1;
        }
    	}
    }
  }

  cout << x << "," << y << "," << max_s << endl;
  //cout << max_power;

  return 0;
}
