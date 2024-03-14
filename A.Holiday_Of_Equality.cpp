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
    int a[n];
   
    int sum  = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    int max = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    cout<<max*n-sum;
    return 0;
}

