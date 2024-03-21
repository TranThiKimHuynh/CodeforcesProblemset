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
	vector<string> v;
	string temp ;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
    
	unordered_map<string,int> m;
	for(int i=0;i<n;i++){
		m[v[i]]++;
	}
	int max = 0;
	string ans;
	for(auto i:m){
		if(i.second>max){
			max = i.second;
			ans = i.first;
		}
	}
	cout<<ans;
	return 0;
}

