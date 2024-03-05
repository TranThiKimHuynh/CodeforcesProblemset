#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
using namespace std;
#define maxM 1000

int main()
{  
   int n, event;
   int police =0;
   int cntCrime = 0;
   cin>>n;
   while(n--)
   {
       cin>>event;
       if(event == -1)
       {   
           // res is the rest of the police force after the event
           int res = police + event;
             if(res ==  -1)
             {
                cntCrime++;
             }
             else
             {
                police = res;
             }
       }
         else
         {
            police += event;
         }
   }
   cout<<cntCrime;

   return 0;
}
s