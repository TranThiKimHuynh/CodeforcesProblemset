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
		string base = "Timur";
		if (n != base.length()) cout << "NO" << endl;
		else {
			// sort s and base by Alphabet's pos
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (base[i] > base[j]) {
						swap(base[i], base[j]);
					}
					if (s[i] > s[j]) {
						swap(s[i], s[j]);
					}
				}
			}
			if (s == base) {
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
	}
	return 0;
}