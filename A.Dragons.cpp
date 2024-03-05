#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
using namespace std;
#define maxM 1000

int main()
{  
   int s,n;
   cin>>s>>n;
   int a[n],b[n];
   bool defeat = false;
   for(int i=0;i<n;i++)
   {
       cin>>a[i]>>b[i];
   }
   
   // sorting the dragons based on their strength
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n-1;j++)
       {
           if(a[j]>a[j+1])
           {
               swap(a[j],a[j+1]);
               swap(b[j],b[j+1]);
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       if(s>a[i])
       {
           s+=b[i];
       }
       else
       {
          defeat = true;
          break;
       }
   }
   
   if(defeat)
   {
       cout<<"NO";
   }
   else
   {
       cout<<"YES";
   }

   return 0;
}
