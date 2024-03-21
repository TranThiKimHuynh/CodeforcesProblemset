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
		string s = "codeforces";
		string c;
		cin>>c;
		if(s.find(c)!= s.npos){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	    
	}
	return 0;
}

