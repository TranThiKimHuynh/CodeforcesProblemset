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
	int t;
	cin >> t;
	while (t--) {

		int a, b, c;
		cin >> a >> b >> c;
		if ((3- b%3) > c && b% 3 != 0) {
			cout << -1 << endl;
		}
		
		else {
			int minimumTent = a + (b+c)/3;
			if ((b + c )% 3 != 0) minimumTent++;
			cout << minimumTent << endl;
		}
	}
	return 0;
}

