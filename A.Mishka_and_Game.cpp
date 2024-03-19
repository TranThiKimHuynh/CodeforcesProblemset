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
	int x, y;
	int sumMishka = 0;
	int sumChris = 0;
	for (int i = 0; i < n; i++) {
		
		cin >> x >> y;
		if (x > y) {
			sumMishka++;
		}
		if(x < y) {
			sumChris++;
		}
	}
	if (sumMishka > sumChris) {
		cout << "Mishka" << endl;
	}
	else if (sumMishka < sumChris) {
		cout << "Chris" << endl;
	}
	else {
		cout << "Friendship is magic!^^" << endl;
	}

	
	return 0;
}

