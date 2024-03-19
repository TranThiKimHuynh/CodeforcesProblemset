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
	int n;
	cin >> n;
	if (n > 0) {
		cout << n;
	}
	else {
		n = abs(n);
		int deleteLast1 = n / 10;
		int fistLastDigit = n % 10;
		n = n / 10;
		int secondLastDigit = n % 10;
		n = n / 10;
		int deleteLast2 = n * 10 + fistLastDigit;
		cout << - min(deleteLast1, deleteLast2) << endl;
	}
	return 0;
}

