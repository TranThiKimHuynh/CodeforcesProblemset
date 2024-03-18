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
    int n;
    cin>>n;
    vector<int> host(n);
    vector<int> guest(n);
    for(int i=0;i<n;i++)
    {
        cin>>host[i]>>guest[i];
    }
    int cnt = 0;  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(host[i] == guest[j]) cnt++;
        }
    }

    cout<<cnt;

    return 0;
}