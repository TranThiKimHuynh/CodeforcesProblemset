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
	int n,m;
	cin>> n >> m;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int sum=0;
	for(int i=0;i<m;i++){
		if(a[i]<0){
			sum+=a[i];
		}
	}
	cout<<-sum;

	return 0;
}