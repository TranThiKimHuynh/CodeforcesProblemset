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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        int base = a[0];
        int cnt = 0;
        int index ;
        for(int i=1;i<n;i++){
            if(a[i] != base){
                index = i + 1;
                ++cnt;
            }

        }
        if(cnt == 1) {cout<<index<<endl;}
        else {cout<<1<<endl;}
    }
    return 0;
}