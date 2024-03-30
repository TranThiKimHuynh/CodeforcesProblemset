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
	while (t--) {
		string s, base = "abc";
		cin >> s;
		int cnt =0;
		for(int i=0;i<s.size();i++){
			if(s[i]==base[i]) cnt++;
		}
		if(cnt > 0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	}

	return 0;
}