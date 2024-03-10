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

    int n, k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;

    int asn = min(drink, min(lime, salt))/n;

    cout << asn << endl;
    return 0;
}