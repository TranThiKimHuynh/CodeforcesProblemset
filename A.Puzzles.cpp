#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
using namespace std;
#define maxM 1000
int main()
{
   // n : number of students
   // m : number of puzzles
   int n, m;
   cin >> n >>  m;
   int arr[m];
   for (int i = 0; i < m; i++)
   {
      cin >> arr[i];
   }

   sort(arr, arr + m);

   int min = maxM;
   for (int i = 0; i <= m - n; i++)
   {
      if( min > abs(arr[i] - arr[i+n-1])){
         min = abs(arr[i] - arr[i + n - 1]);
      }
   }
   cout<<min;

   return 0;
}
