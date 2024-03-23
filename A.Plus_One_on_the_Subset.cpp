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
        int max =a[0], min = a[0];
        
        // if all elment are same then min value of array must equal to max value of array
        // so this is the minunum of operations
        for(int i=0;i<n;i++){
            if(a[i]>max) max = a[i];
            if(a[i]<min) min = a[i];
        }
        cout<<max-min<<endl;
    }
	return 0;
}

