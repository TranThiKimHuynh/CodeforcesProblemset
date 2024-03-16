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
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int sumFirst = 0;
        for(int i=0;i<3;i++ ){
            sumFirst += s[i] - '0';
        }
        int sumLast = 0;
        for(int i=3;i<6;i++ ){
            sumLast += s[i] - '0';
        }
        if(sumFirst == sumLast){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}