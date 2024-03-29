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
		string s;
		cin >> s;
		if (s.length() % 2 != 0) {
			cout<< "NO" << endl;
		}
		else {
			int half = s.length() / 2;
			if (s.substr(0, half) == s.substr(half , half)) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}

	return 0;
}