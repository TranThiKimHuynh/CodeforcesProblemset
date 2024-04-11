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
		string s;
		cin >> s;
		int duplicate = 0;
		int temp = n;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (s[i] == s[j]) {
					++duplicate;
					// remove duplicate letter
					s.erase(j, 1);
					j--;
					n--;
				}
			}
		}
		cout << (temp - duplicate) * 2 + duplicate << endl;
	}
	return 0;
}