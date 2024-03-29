#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_map>
using namespace std;


int main()
{   
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int hour = stoi(s.substr(0,2));
		int minute = stoi(s.substr(3,2));
        string sMinute,sHour;
		if(minute <10){
			sMinute = "0"+to_string(minute);
		}
		else{
			sMinute = to_string(minute);
		}


		if(hour <=12 && hour > 0){
			if (hour < 10){
				sHour = "0"+to_string(hour);
			}
			else{
				sHour = to_string(hour);
			}
			if(hour <12){
			cout<<sHour<<":"<<sMinute<<" AM"<<endl;
			}
			else{
				cout<<sHour<<":"<<sMinute<<" PM"<<endl;
			}
		}
		else if(hour == 0){
			cout<<"12:"<<sMinute<<" AM"<<endl;
		}
		
		else{
			hour = hour - 12;
			if (hour < 10){
				sHour = "0"+to_string(hour);
			}
			else{
				sHour = to_string(hour);
			}
		
			cout<<sHour<<":"<<sMinute<<" PM"<<endl;
			
		}
	    
	}

	return 0;
}