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
		int x,y,n;
		cin>>x>>y>>n;
		
		int r =  n%x;
		if(r == y) cout<<n<<endl;
		else if ( r < y) cout<<n +(y - r) - x<<endl;
		else cout<<n - (r-y)<<endl;
	}
	return 0;
}

