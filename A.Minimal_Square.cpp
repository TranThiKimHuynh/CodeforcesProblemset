#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_map>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--) {
		
		int a, b;
		cin >> a >> b;
		
		if (a == b) {
			cout << 4 * a * a << endl;
		}
		else {
			int temp = 0;
			if (a > b) {
				temp = a / b;
				if (temp >= 2) {
					cout << a * a << endl;
				}
				else {
					cout << 4 * b * b << endl;
				}
			}
			else {
				temp = b / a;
				if (temp >= 2) {
					cout << b * b << endl;
				}
				else {
					cout << 4 * a* a << endl;
				}
			}
		}
	}

	return 0;
}