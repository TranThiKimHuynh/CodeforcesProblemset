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
  int shovelPrice, rouble;
  cin >> shovelPrice >> rouble;

  int cnt = 1;

  while (true)
  {
    if ((shovelPrice * cnt - rouble) % 10 == 0)
      break;
    else if ((shovelPrice * cnt) % 10 == 0)
    {
      break;
    }
    else
      cnt++;
  }
  cout << cnt << endl;
}