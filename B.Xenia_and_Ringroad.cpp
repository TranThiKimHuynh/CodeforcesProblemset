#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
#define maxM 1000

int main()
{  

    int n, m;
    cin>>n>>m;

    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    unsigned long long time = a[0]-1;

    for(int i=1;i<m;i++){
        if(a[i] < a[i-1]){
            time += (n - a[i-1]) +a[i] ;
        }
        else if(a[i] == a[i-1]){
            time += 0;
        }
        else{
            time += a[i] - a[i-1];
        }
    }
    cout<<time;
    return 0;
}