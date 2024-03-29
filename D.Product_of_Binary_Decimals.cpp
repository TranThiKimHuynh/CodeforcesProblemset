#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_map>
using namespace std;

bool check(int n) {
	bool res = true;
	while (n != 0) {
		if ((n % 10) != 0 && (n % 10 )!= 1) {
			res = false;
			break;
		}
		n = n / 10;
	}
	return res;
}

bool checkWithNumber(int n, int k){
	while(n!=0){
		if (n <k){
			return false;
		}
		if(n% k != 0){
		
			return false;
		}
		else{
			n = n/k;
			if(check(n)){
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (check(n)) {
			cout << "YES" << endl;
		}
		else{
			if(checkWithNumber(n, 11) || checkWithNumber(n, 110) || checkWithNumber(n, 111)||checkWithNumber(n,101)) {
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
	}

	return 0;
}