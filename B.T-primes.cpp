#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
#define maxM 1000

bool checkPrime(unsigned long long n){
  if( n< 2){
    return false;
  }
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      
      return false;
    }
  }
  return true;
}
int main()
{  
    int n;
    cin >> n;
    while(n--){
        unsigned long long x;
        cin>>x;
        
        // check if x is ^2 of prime number
        unsigned long long prime = sqrt(x);
        unsigned long long hold = prime*prime;

        if(hold == x){
           if(checkPrime(prime)){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
