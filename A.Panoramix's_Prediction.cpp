#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_map>
using namespace std;

bool checkPrime(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;

}
int main()
{    
	int m,n;
	cin>>n>>m;
	int f= 0;
	if(checkPrime(m) == 0) cout<<"NO"<<endl;
	else {
		for(int i=n+1;i<m;i++){
			if(checkPrime(i)==1){
				f = 1;
				break;
			}
		}
		if(f==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}

	return 0;
}