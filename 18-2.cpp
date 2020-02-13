/* slozenost: O(min * n * n)
   min - broj minuta (1000000000)
   n - velicina polja (50)
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char arr[50][50], help[50][50];
  int all[100000], repeat[100000] = { 0 }, space[100000] = {0};
  int min = 1000000000;

  for (int i = 0; i < 50; ++i)
  {
  	for (int j = 0; j < 50; ++j)
  	{
  		cin >> arr[i][j];
  		help[i][j] = arr[i][j];
  	}
  }

  int x = 0;
  for (int k = 0; k < min; ++k)
  {
  	for (int i = 0; i < 50; ++i)
  	{
  		for (int j = 0; j < 50; ++j)
  		{
  			int t = 0, l = 0;
  			if (arr[i][j] == '.') {
  				if (i == 0) {
  					if (j == 0) {
  						if (arr[i][j+1] == '|') t++;
  						if (arr[i+1][j+1] == '|') t++;
  						if (arr[i+1][j] == '|') t++;
  					} else if (j == 49) {
  						if (arr[i][j-1] == '|') t++;
  						if (arr[i+1][j-1] == '|') t++;
  						if (arr[i+1][j] == '|') t++;
  					} else {
  						if (arr[i][j-1] == '|') t++;
  						if (arr[i+1][j-1] == '|') t++;
  						if (arr[i+1][j] == '|') t++;
  						if (arr[i][j+1] == '|') t++;
  						if (arr[i+1][j+1] == '|') t++;
  					}
  				} else if (i == 49) {
  					if (j == 0) {
  						if (arr[i][j+1] == '|') t++;
  						if (arr[i-1][j+1] == '|') t++;
  						if (arr[i-1][j] == '|') t++;
  					} else if (j == 49) {
  						if (arr[i][j-1] == '|') t++;
  						if (arr[i-1][j-1] == '|') t++;
  						if (arr[i-1][j] == '|') t++;
  					} else {
  						if (arr[i][j-1] == '|') t++;
  						if (arr[i-1][j-1] == '|') t++;
  						if (arr[i-1][j] == '|') t++;
  						if (arr[i][j+1] == '|') t++;
  						if (arr[i-1][j+1] == '|') t++;
  					}
  				} else if (j == 0) {
  					if (arr[i][j+1] == '|') t++;
  					if (arr[i-1][j+1] == '|') t++;
  					if (arr[i-1][j] == '|') t++;
  					if (arr[i+1][j] == '|') t++;
  					if (arr[i+1][j+1] == '|') t++;
  				} else if (j == 49) {
  					if (arr[i][j-1] == '|') t++;
  					if (arr[i-1][j-1] == '|') t++;
  					if (arr[i-1][j] == '|') t++;
  					if (arr[i+1][j] == '|') t++;
  					if (arr[i+1][j-1] == '|') t++;
  				} else {
  					if (arr[i][j+1] == '|') t++;
  					if (arr[i-1][j+1] == '|') t++;
  					if (arr[i-1][j] == '|') t++;
  					if (arr[i+1][j] == '|') t++;
  					if (arr[i+1][j+1] == '|') t++;
  					if (arr[i][j-1] == '|') t++;
  					if (arr[i-1][j-1] == '|') t++;
  					if (arr[i+1][j-1] == '|') t++;
  				}
  				if (t >= 3) help[i][j] = '|';
  			}

  			if (arr[i][j] == '|') {
  				if (i == 0) {
  					if (j == 0) {
  						if (arr[i][j+1] == '#') l++;
  						if (arr[i+1][j+1] == '#') l++;
  						if (arr[i+1][j] == '#') l++;
  					} else if (j == 49) {
  						if (arr[i][j-1] == '#') l++;
  						if (arr[i+1][j-1] == '#') l++;
  						if (arr[i+1][j] == '#') l++;
  					} else {
  						if (arr[i][j-1] == '#') l++;
  						if (arr[i+1][j-1] == '#') l++;
  						if (arr[i+1][j] == '#') l++;
  						if (arr[i][j+1] == '#') l++;
  						if (arr[i+1][j+1] == '#') l++;
  					}
  				} else if (i == 49) {
  					if (j == 0) {
  						if (arr[i][j+1] == '#') l++;
  						if (arr[i-1][j+1] == '#') l++;
  						if (arr[i-1][j] == '#') l++;
  					} else if (j == 49) {
  						if (arr[i][j-1] == '#') l++;
  						if (arr[i-1][j-1] == '#') l++;
  						if (arr[i-1][j] == '#') l++;
  					} else {
  						if (arr[i][j-1] == '#') l++;
  						if (arr[i-1][j-1] == '#') l++;
  						if (arr[i-1][j] == '#') l++;
  						if (arr[i][j+1] == '#') l++;
  						if (arr[i-1][j+1] == '#') l++;
  					}
  				} else if (j == 0) {
  					if (arr[i][j+1] == '#') l++;
  					if (arr[i-1][j+1] == '#') l++;
  					if (arr[i-1][j] == '#') l++;
  					if (arr[i+1][j] == '#') l++;
  					if (arr[i+1][j+1] == '#') l++;
  				} else if (j == 49) {
  					if (arr[i][j-1] == '#') l++;
  					if (arr[i-1][j-1] == '#') l++;
  					if (arr[i-1][j] == '#') l++;
  					if (arr[i+1][j] == '#') l++;
  					if (arr[i+1][j-1] == '#') l++;
  				} else {
  					if (arr[i][j+1] == '#') l++;
  					if (arr[i-1][j+1] == '#') l++;
  					if (arr[i-1][j] == '#') l++;
  					if (arr[i+1][j] == '#') l++;
  					if (arr[i+1][j+1] == '#') l++;
  					if (arr[i][j-1] == '#') l++;
  					if (arr[i-1][j-1] == '#') l++;
  					if (arr[i+1][j-1] == '#') l++;
  				}
  				if (l >= 3) help[i][j] = '#';
  			}

  			if (arr[i][j] == '#') {
  				if (i == 0) {
  					if (j == 0) {
  						if (arr[i][j+1] == '#') l++;
  						if (arr[i+1][j+1] == '#') l++;
  						if (arr[i+1][j] == '#') l++;
  					} else if (j == 49) {
  						if (arr[i][j-1] == '#') l++;
  						if (arr[i+1][j-1] == '#') l++;
  						if (arr[i+1][j] == '#') l++;
  					} else {
  						if (arr[i][j-1] == '#') l++;
  						if (arr[i+1][j-1] == '#') l++;
  						if (arr[i+1][j] == '#') l++;
  						if (arr[i][j+1] == '#') l++;
  						if (arr[i+1][j+1] == '#') l++;
  					}
  				} else if (i == 49) {
  					if (j == 0) {
  						if (arr[i][j+1] == '#') l++;
  						if (arr[i-1][j+1] == '#') l++;
  						if (arr[i-1][j] == '#') l++;
  					} else if (j == 49) {
  						if (arr[i][j-1] == '#') l++;
  						if (arr[i-1][j-1] == '#') l++;
  						if (arr[i-1][j] == '#') l++;
  					} else {
  						if (arr[i][j-1] == '#') l++;
  						if (arr[i-1][j-1] == '#') l++;
  						if (arr[i-1][j] == '#') l++;
  						if (arr[i][j+1] == '#') l++;
  						if (arr[i-1][j+1] == '#') l++;
  					}
  				} else if (j == 0) {
  					if (arr[i][j+1] == '#') l++;
  					if (arr[i-1][j+1] == '#') l++;
  					if (arr[i-1][j] == '#') l++;
  					if (arr[i+1][j] == '#') l++;
  					if (arr[i+1][j+1] == '#') l++;
  				} else if (j == 49) {
  					if (arr[i][j-1] == '#') l++;
  					if (arr[i-1][j-1] == '#') l++;
  					if (arr[i-1][j] == '#') l++;
  					if (arr[i+1][j] == '#') l++;
  					if (arr[i+1][j-1] == '#') l++;
  				} else {
  					if (arr[i][j+1] == '#') l++;
  					if (arr[i-1][j+1] == '#') l++;
  					if (arr[i-1][j] == '#') l++;
  					if (arr[i+1][j] == '#') l++;
  					if (arr[i+1][j+1] == '#') l++;
  					if (arr[i][j-1] == '#') l++;
  					if (arr[i-1][j-1] == '#') l++;
  					if (arr[i+1][j-1] == '#') l++;
  				}
  				if (i == 0) {
  					if (j == 0) {
  						if (arr[i][j+1] == '|') t++;
  						if (arr[i+1][j+1] == '|') t++;
  						if (arr[i+1][j] == '|') t++;
  					} else if (j == 49) {
  						if (arr[i][j-1] == '|') t++;
  						if (arr[i+1][j-1] == '|') t++;
  						if (arr[i+1][j] == '|') t++;
  					} else {
  						if (arr[i][j-1] == '|') t++;
  						if (arr[i+1][j-1] == '|') t++;
  						if (arr[i+1][j] == '|') t++;
  						if (arr[i][j+1] == '|') t++;
  						if (arr[i+1][j+1] == '|') t++;
  					}
  				} else if (i == 49) {
  					if (j == 0) {
  						if (arr[i][j+1] == '|') t++;
  						if (arr[i-1][j+1] == '|') t++;
  						if (arr[i-1][j] == '|') t++;
  					} else if (j == 49) {
  						if (arr[i][j-1] == '|') t++;
  						if (arr[i-1][j-1] == '|') t++;
  						if (arr[i-1][j] == '|') t++;
  					} else {
  						if (arr[i][j-1] == '|') t++;
  						if (arr[i-1][j-1] == '|') t++;
  						if (arr[i-1][j] == '|') t++;
  						if (arr[i][j+1] == '|') t++;
  						if (arr[i-1][j+1] == '|') t++;
  					}
  				} else if (j == 0) {
  					if (arr[i][j+1] == '|') t++;
  					if (arr[i-1][j+1] == '|') t++;
  					if (arr[i-1][j] == '|') t++;
  					if (arr[i+1][j] == '|') t++;
  					if (arr[i+1][j+1] == '|') t++;
  				} else if (j == 49) {
  					if (arr[i][j-1] == '|') t++;
  					if (arr[i-1][j-1] == '|') t++;
  					if (arr[i-1][j] == '|') t++;
  					if (arr[i+1][j] == '|') t++;
  					if (arr[i+1][j-1] == '|') t++;
  				} else {
  					if (arr[i][j+1] == '|') t++;
  					if (arr[i-1][j+1] == '|') t++;
  					if (arr[i-1][j] == '|') t++;
  					if (arr[i+1][j] == '|') t++;
  					if (arr[i+1][j+1] == '|') t++;
  					if (arr[i][j-1] == '|') t++;
  					if (arr[i-1][j-1] == '|') t++;
  					if (arr[i+1][j-1] == '|') t++;
  				}
  				if (t < 1 || l < 1) help[i][j] = '.';	
  			}
  		}
  	}

    int t = 0, l = 0;
	  for (int m = 0; m < 50; ++m)
	  {
	  	for (int n = 0; n < 50; ++n)
	  	{
	  		arr[m][n] = help[m][n];
        if (arr[m][n] == '|') t++;
        if (arr[m][n] == '#') l++;
	  	}
	  }
    int sum = t * l;
    all[k] = sum;

    for (int m = 0; m < k; ++m)
    {
      if (all[m] == sum) repeat[m]++;
    }

    if (k > 100) {
      int rep = 0;
      for (int m = k - 1; m >= 0; m--)
      {
        rep++;
        if (all[m] == sum) break;
      }
      space[x] = rep;
      x++;
      int total = 0; 

      for (int n = 0; n < x - 1; ++n)
      {
        if (space[n] == rep) total++;
      }
      if (total > 20) {
        if ((min - k - 1) % rep == 0 ) {
          cout << sum;
          return 0;
        }
      }
    }
  }

  return 0;
}