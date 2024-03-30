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
		int n;
		cin >> n;
		int a[10000];
		int min = 9, index = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] < min) {
				min = a[i];
				index = i;
			}
		}
		a[index] = min + 1;
		int maxProduct = 1;
		for (int i = 0; i < n; i++) {
			maxProduct *= a[i];
		}
		cout << maxProduct << endl;
	}

	return 0;
}