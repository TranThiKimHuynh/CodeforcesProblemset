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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt = 0;
        if(b > a ) cnt++;
        if (c > a) cnt++;
        if (d > a) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}