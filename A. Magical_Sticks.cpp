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
		cin >>n;
		
		int cnt = 0;
		if(n <= 2){
			cnt = 1;
		}
		else{
			if(n%2 == 0){
				cnt = n/2;
			}
			else{
				cnt = (n/2) + 1;
			}
		}
		cout<<cnt<<endl;
	
	}
	return 0;
}