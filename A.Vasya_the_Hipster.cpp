#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
#define maxM 1000

int main(){
  int redSocks, blueSocks;
  cin>>redSocks>>blueSocks;
  int pair = min(redSocks, blueSocks);

  int restSock = max(redSocks, blueSocks) - pair;
  restSock = restSock/2;

  cout<<pair<<" "<<restSock<<endl;
}