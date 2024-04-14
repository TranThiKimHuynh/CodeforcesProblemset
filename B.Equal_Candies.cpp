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
		int a[n];
		int min = 10000000;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<min){
				min = a[i];
			}
		}
		int cnt = 0;
		for(int i=0;i<n;i++){
			if(a[i]>min){
				cnt += a[i]-min;
			}
		}
		cout<<cnt<<endl;	
		
	
	}
	return 0;
}