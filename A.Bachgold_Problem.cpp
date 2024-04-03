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
	int n;
	cin>>n;
	if (n%2 == 0){
		int k = n/2;
		cout<<k<<endl;
		for(int i = 0; i < k; i++){
			cout<<2<<" ";
		}
	}
	else{
		int k = n/2;
		cout<<k<<endl;
		for(int i = 0; i < k-1; i++){
			cout<<2<<" ";
		}
		cout<<3;
	}
	return 0;
}