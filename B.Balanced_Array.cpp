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
		int n;
		cin >> n;
		if ((n / 2) % 2 != 0) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			int sumEven = 0;
			int sumOdd = 0;
			for (int i = 1; i <= n / 2; i = i + 1) {
				cout << 2 * i << " ";
				sumEven += 2 * i;
			}

			for (int i = 1; i <= n / 2; i = i + 1) {
				if (i != n / 2 ) {
					cout << 2 * i - 1 << " ";
					sumOdd += 2 * i - 1;
				}
				else {
					cout << sumEven - sumOdd << endl;
				}

			}


		}
	}
	return 0;
}

