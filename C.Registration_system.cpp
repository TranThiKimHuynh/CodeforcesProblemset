#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
using namespace std;

int main()
{
   int n;
   cin>>n;
   map<string,int> m;
   
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;
       if(m.find(s) != m.end()){
           m[s]++;
           cout<<s + to_string(m[s])<<endl;
       }
       else{
          cout<<"OK"<<endl;
          m.insert(pair<string,int>(s,0));
       }
   }
   
   return 0;
}

