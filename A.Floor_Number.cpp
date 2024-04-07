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
		int n, x;
		cin>>n>>x;
		int cnt = 0;
		if(n < 2){
			cout<<1<<endl;
		}
		else{
			n -= 2;
			cnt++;
			cnt += n/x;
			if(n%x != 0){
				cnt++;
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}