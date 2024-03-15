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
    int num1, num2;
    if(n%2 == 0){
        num1 = 4;
        num2 = n-4;
    }
    else{
        num1 = 9;
        num2 = n-9;
    }
   cout<<num1<<" "<<num2;
   return 0;
}

