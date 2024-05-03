#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_map>
using namespace std;

void rototateMatrix(int a[2][2]){
	int a1= a[0][0];
	int a2= a[0][1];
	int a3= a[1][0];
    int a4= a[1][1];
	a[0][0]=a3;
	a[0][1]=a1;
	a[1][0]=a4;
	a[1][1]=a2;
}
int main()
{

	int t;
	cin>>t;
	while(t--){
		int arr[2][2];
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cin>>arr[i][j];
			}
		}
		if(arr[0][0]<arr[1][0] && arr[0][1]<arr[1][1] && arr[0][0]<arr[0][1] && arr[1][0]<arr[1][1]){
			cout<<"YES"<<endl;
		}
		else{
			int i=1;
            while(i<=3){
				rototateMatrix(arr);
				
					if(arr[0][0]<arr[1][0] && arr[0][1]<arr[1][1] && arr[0][0]<arr[0][1] && arr[1][0]<arr[1][1]){
						cout<<"YES"<<endl;
						break;
					}
					else if(i==3){
						cout<<"NO"<<endl;
					}
	            i++;
			}
		}
		

	
	}
	return 0;
}