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
    int a[n];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0,cnt4 = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i] == 1) cnt1++;
        if(a[i] == 2) cnt2++;
        if(a[i] == 3) cnt3++;
        if(a[i] == 4) cnt4++;
    }
    // groups has enought 4 people 
    int minCar = cnt4;
    
    // gather 1 and 3 people into a group
    if(cnt1 > cnt3)
    {
        minCar += cnt3;
        cnt1 -= cnt3;
        
        minCar += cnt2/2;
        cnt2 = cnt2%2;
        if(cnt2 == 1){
            minCar ++;
            cnt1 -= 2;
            if(cnt1 >= 0){
                minCar += cnt1/4;
                if(cnt1%4 != 0) minCar++;
            }
        }
        else{
            minCar += cnt1/4;
            if(cnt1%4 != 0) minCar++;
        }

    }
    // gather 2 and 3 into different groups because max of car is 4
    else
    {
        minCar += cnt1;
        cnt3 -= cnt1;
        
        minCar += cnt2/2;
        cnt2 = cnt2%2;
        if(cnt2 == 1){
            minCar ++;
            minCar += cnt3;
        }
        else{
            minCar += cnt3;
        }
    }
   
    cout<<minCar;

   

    return 0;
}