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
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int count =0;
        for(int i=0;i< n - 2;i++)
        {
            if((s[i]=='m' && s[i+1]== 'a'&& s[i+2]=='p') ||(s[i]=='p' && s[i+1]== 'i'&& s[i+2]=='e'))
            {
                count++;
                i= i+ 2;
            }
        }
      
        cout<<count<<endl;  

    }
    return 0;
}