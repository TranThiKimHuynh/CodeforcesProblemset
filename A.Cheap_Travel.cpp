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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int normalCost = n*a;
    int specialCost = 0;
    if(n<= m) specialCost = b;
    else
    {
        if(n%m == 0) specialCost = (n/m)*b;
        else specialCost = (n/m)*b + min((n%m)*a,b);
    }
    cout<<min(normalCost,specialCost)<<endl;
    return 0;
}