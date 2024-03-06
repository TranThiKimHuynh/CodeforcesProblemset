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
  int n;
  cin >> n;
  int a[n];

  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  // assign the first element of the array to max and min
  int max=a[0];
  int min=a[0];
  
  int amazing = 0;
  for(int i=1;i<n;i++){
    // if the current element is greater than max, assign it to max and increment amazing
    if(a[i]>max){
      max=a[i];
      amazing++;
    }
    // if the current element is less than min, assign it to min and increment amazing
    else
    if (a[i]<min){
      min=a[i];
      amazing++;
    }
  }
  cout<<amazing<<endl;

}
