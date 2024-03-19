#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{ 
   int t;
   cin>>t;
   while(t--){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b==c){
		cout<<"+"<<endl;
	}
	else{
		cout<<"-"<<endl;
	}
   }
   return 0;
}

