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
		int n[3];
		cin>>n[0]>>n[1]>>n[2];
		sort(n,n+3);

		cout<<n[1]<<endl;

	    
	}
	return 0;
}

