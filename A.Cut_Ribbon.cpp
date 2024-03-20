#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
	int n, a, b, c, k, res = 1;
	cin >> n >> a >> b >> c;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++)
		{   
			// n = i*a + j*b + t*c let t*c = k 
			k = n - a * i - b * j;

			if (k >= 0 && k % c == 0)
				res = max(res, (i + j + k / c));

		} 

	}
	cout << res;

	return 0;
}

