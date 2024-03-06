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
  int n,k;
  
  cin>>n>>k;
  int cnt = 0;
  // sumTime is the sum of time to solve the problems
  int sumTime = 0;
  for(int i = 1;i<= n;i++){
    sumTime += 5*i;
    // 240 = 4*60 
    if(sumTime <= 240-k){
      cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;

}
