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
		int a,b,c;
		cin>>a>>b>>c;

		if(a == b ) cout<<c<<endl;
		if(a == c) cout<<b <<endl;
		if(b == c) cout<<a <<endl;
	
	}

	return 0;
}