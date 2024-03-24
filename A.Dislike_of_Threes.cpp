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
		int k;
		cin>>k;
		for(int i=1;i<=k;i++){
            if(i%3==0 || i%10==3){
				k++;
			}
		}
		cout<<k<<endl;
	}
	return 0;
}
