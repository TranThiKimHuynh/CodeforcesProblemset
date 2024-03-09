#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
#define maxM 1000

int main()
{  int n[4];
   for(int i=0;i<4;i++)
   {
       cin>>n[i];
   }

    sort(n,n+4);

    int a = n[3] - n[2];
    int b = n[3] - n[1];
    int c = n[3] - n[0];

    cout<<a<<" "<<b<<" "<<c<<endl;  

   
}