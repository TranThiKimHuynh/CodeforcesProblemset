#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
#define maxM 1000

int main(){
  int n,m;
  cin>>n>>m;
  
  int flag = 0;
  for(int i=0;i<n;i++){
     if(i%2==0){
        flag++;
     }
    for(int j=0;j<m;j++){
        if(i%2==0){
          cout<<"#";
        }
        else{
            if(j== 0 && flag % 2 == 0){
                
                cout<<"#";
            }
            else if (j == m-1 && flag %2 == 1){
              cout<<"#";
            }
            else{
              
                cout<<".";
            }
        }
    }
    cout<<endl;
  }
}