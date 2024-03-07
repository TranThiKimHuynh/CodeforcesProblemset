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
  int x[3];
  cin>> x[0] >> x[1] >> x[2];
  sort(x,x+3);
  cout<<x[2]-x[1] + x[1] - x[0]<<endl;

}
