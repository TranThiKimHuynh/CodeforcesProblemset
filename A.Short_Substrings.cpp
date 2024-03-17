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

    for(int i=0;i<t;i++){
        string s;
        cin >>s;
        cout<<s[0];
        for(int i=1;i<s.length() - 1;i+=2){
            cout<<s[i];
        }
        cout<<s[s.length() - 1]<<endl;
        
    }
    return 0;
}