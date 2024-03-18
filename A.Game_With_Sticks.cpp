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
    int n,m;
    cin>>n>>m;
    int minOf2 = min(n,m);
    if(minOf2%2==0)
    {
        cout<<"Malvika";
    }
    else
    {
        cout<<"Akshat";
    }

    return 0;
}