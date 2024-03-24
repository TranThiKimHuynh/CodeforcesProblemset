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
	int x[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int q;
	cin>>q;
	int m[q];
	for(int i=0;i<q;i++){
		cin>>m[i];
	}
	sort(x,x+n);
	for(int i=0;i<q;i++){
		int ans = upper_bound(x,x+n,m[i]) - x;
		cout<<ans<<endl;
	}
	return 0;
}
