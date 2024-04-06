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
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int maxLeft = max(a,b);
		int minRight = min(c,d);
		int minLeft = min(a,b);
		int maxRight = max(c,d);
		if(maxLeft>minRight && minLeft < maxRight){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}