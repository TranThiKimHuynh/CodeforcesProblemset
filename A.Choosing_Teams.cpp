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
    int n, k;
    cin>>n>>k;
    int paticipants[n];
    for(int i=0;i<n;i++){
        cin>>paticipants[i];
    }
    int team =0;
    for(int i=0;i<n;i++){
        if(paticipants[i] + k <= 5 ){
            team++;
        }
    }
    cout<<team/3<<endl;
    return 0;
}