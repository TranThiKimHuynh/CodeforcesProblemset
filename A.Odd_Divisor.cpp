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
       unsigned long long int n;
	   cin>>n;
	   if((n&(n-1)) == 0){
		   cout<<"NO"<<endl;
	   }
	   else{
		   cout<<"YES"<<endl;
	   }
	   
	}
	return 0;
}
