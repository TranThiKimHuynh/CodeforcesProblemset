#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
#define maxM 1000

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int size = n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i =0;i<n - 1;i++){
           if(abs(a[i] - a[i+1]) <= 1){
               size--;
           }
        }
        if(size == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}