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
    int cnt = 0;
    // each bit 1 of n is number of bacteria be put in the box
    while(n){
        cnt += n&1;
        n >>= 1;
    }
    cout<<cnt<<endl;
    return 0;
}