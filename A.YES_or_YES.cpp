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
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            s[i]= tolower(s[i]);
        }
        if(s == "yes") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}