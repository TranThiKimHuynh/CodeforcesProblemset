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
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		int a[n];
		int sum2 =0, sum1=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1)  sum1+= a[i];
			if(a[i]==2)  sum2+= a[i];
		}
		// sum total is odd then it is impossible to divide the candies
		if((sum1+sum2)%2!=0){
			cout<<"NO"<<endl;
		}
		else{
			// if sum of 1's weight is 0 and sum of 2's weight is odd then it is impossible to divide the candies
			if(sum1 ==  0 && (sum2/2) %2 != 0){
				cout<<"NO"<<endl;
			}
			
			else if (sum1 == 0 && (sum2/2) %2 == 0){
				cout<<"YES"<<endl;
			}
			// because sum of array is even then 1's weight must be even to devide the candies
			else if (sum1 %2 == 0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
           

		}
	}

	return 0;
}