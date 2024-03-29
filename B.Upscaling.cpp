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
			int k =2;
			string s1,s2;
			for(int i=0;i<n;i+=1){
	           if(i%2 == 0){
				 s1+="##";
				 s2+="..";
			   }
			   else{
				   s1+="..";
				   s2+="##";
			   }
			}

			for(int i=0;i<n;i++){
				if(i%2 == 0){
					cout<<s1<<endl;
					cout<<s1<<endl;
				}
				else{
					cout<<s2<<endl;
					cout<<s2<<endl;
				}
			}
		}

	return 0;
}