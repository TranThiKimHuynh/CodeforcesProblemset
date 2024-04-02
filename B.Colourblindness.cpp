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
		string r1, r2;
		cin >> r1 >> r2;
		for (int i = 0; i < n; i++) {
			if (r1[i] != r2[i]) {
			
				if ((r1[i] == 'G' && r2[i] == 'B') || (r1[i] =='B' && r2[i] =='G')) {
					
				}
				else {
					cout << "NO" << endl;
					break;
				}

				
			}
			if (i == n - 1) {
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}