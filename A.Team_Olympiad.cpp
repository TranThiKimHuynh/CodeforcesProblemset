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
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x== 1){
            v1.push_back(i);
        }
        if(x== 2){
            v2.push_back(i);
        }
        if(x== 3){
            v3.push_back(i);
        }
    }
    int team = min(v1.size(),min(v2.size(),v3.size()));
    if(team !=0){
        cout<<team<<endl;
        for(int i=0;i<team;i++){
            cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
        }
    }
    else cout<<0<<endl;
    return 0;
}