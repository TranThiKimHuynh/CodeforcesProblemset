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

   
    string s;
    cin>>s;
    string res = "";
    for(int i=0;i<s.size() ;i++){
        if(s[i] == '.'){
            res += '0';
        }
        else if(s[i] == '-'){
            if(s[i+1] == '.'){
                res += '1';
                i++;
            }
            else if(s[i+1] == '-'){
                res += '2';
                i++;
            }
        }
    }
    cout<<res;
    return 0;
}