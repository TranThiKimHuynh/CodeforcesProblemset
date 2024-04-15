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
		int a,b,c,n;
		cin>>a>>b>>c>>n;

		int max =a;
        if (b > max) max = b;
		if (c > max) max = c;
		int diff = max - a + max - b + max - c;
		if(diff > n){
			cout<<"NO"<<endl;
		}
		else if((n-diff)%3==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	
	}
	return 0;
}