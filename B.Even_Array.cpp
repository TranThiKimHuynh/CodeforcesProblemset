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
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		int numEven = 0, numOdd = 0, wrongPos = 0;
		for(int i = 0; i < n; i++){
			if ( i%2!= a[i]%2 ) {
				wrongPos++;
			}
			if(a[i]%2 == 0) numEven++;
			else numOdd++;
		}
		
		if(n%2 == 0 && numEven != numOdd) cout<<-1<<endl;
		else if(n%2 != 0 && abs(numEven - numOdd) != 1) cout<<-1<<endl;
		else if (wrongPos %2 != 0) cout<<-1<<endl;
		else cout<<wrongPos/2<<endl;
	}
	return 0;
}

