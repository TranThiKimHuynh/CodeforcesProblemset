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
		int c = n/3;
		// c1 + 2*c2 = n
		// divide n by 3 to get each part
		if(n%3==0){
			cout<<c<<" "<<c<<endl;
		}
		else if(n%3==1){
			cout<<c+1<<" "<<c<<endl;
		}
		else{
			cout<<c<<" "<<c+1<<endl;
		}
	}

	return 0;
}