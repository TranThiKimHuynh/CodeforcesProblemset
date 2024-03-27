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
		int n;
		cin>>n;
		if(n%2 == 0){
			cout<<n/2<<endl;
		}
		else cout<<(n-1)/2<<endl;
	}
	return 0;
}