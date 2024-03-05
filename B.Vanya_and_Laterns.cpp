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
   int n,l;
   cin>>n>>l;
   // posL is the position of the lanterns
   // +2 is for the start and end of the street if they're not in array
   double posL[n];
   bool haveStartL = false;
   bool haveEndL = false;
   for(int i=0;i<n;i++)
   {
       cin>>posL[i];
       if(posL[i] == 0)
       {
           haveStartL = true;
       }
       if(posL[i] == l)
       {
           haveEndL = true;
       }
   }
  
   
   sort(posL,posL+n);
   
   double maxD = 0;

   for(int i =0;i<n-1;i++)
   {
       maxD = max(maxD,(posL[i+1]-posL[i]));
   }
   maxD = maxD/2.0;
   
   if(!haveStartL)
   {   
      if(maxD < posL[0]){
       maxD = posL[0];
      }
   }
    if(!haveEndL)
    {
        if(maxD< l - posL[n-1]){
           maxD = l - posL[n-1];
      }
    }

    cout<<setprecision(10)<<maxD<<endl;

    return 0;

}
