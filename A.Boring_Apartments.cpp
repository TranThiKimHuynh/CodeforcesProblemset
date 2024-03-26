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
	while (t--)
	{
		int n;
		cin>>n;
        int res= 0;
		res = (n%10 -1)*10;
		
		int digit = 0;
		while(n!=0){
			digit++;
			n/=10;
		} 
		for(int i = 1; i<=digit; i++){
			res+=i;
		}
		cout<<res<<endl;


	}
	return 0;
}