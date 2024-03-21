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
	int y,m;
	cin>>y>>m;
	int maxDide = max(y,m);
	int numerator = 6-maxDide+1;
	int denominator = 6;
	int gcd = __gcd(numerator,denominator);
	
	cout<<numerator/gcd<<"/"<<denominator/gcd<<endl;
	return 0;
}

