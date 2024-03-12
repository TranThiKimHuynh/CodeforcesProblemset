#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
#define maxM 1000

int main()
{  

    int t;
    cin>>t;
    while(t--){
       int a,b;
       cin>>a>>b;
       int diff = abs( a - b );
       int minimum = diff /10;
       if(diff % 10 != 0){
           minimum++;
       }
       cout<<minimum<<endl;

    }
    return 0;
}