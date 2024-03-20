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

		unsigned long long a, b, m;
		cin >> a >> b >> m;
		unsigned long long res = (m ) / a + (m ) / b + 2;
		cout << res << endl;
	}
	return 0;
}

