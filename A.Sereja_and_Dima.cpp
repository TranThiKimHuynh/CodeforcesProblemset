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
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
    // Using two pointer technique
	int Seraja = 0, Dima = 0;
	int *l = &arr[0], *r = &arr[n - 1];

	int i = 0;
	while (*l != *r)
	{
		if (i % 2 == 0)
		{
			if (*l > *r)
			{
				Seraja += *l;
				l++;
			}
			else
			{
				Seraja += *r;
				r--;
			}
		}
		else
		{
			if (*l > *r)
			{
				Dima += *l;
				l++;
			}
			else
			{
				Dima += *r;
				r--;
			}
		}
		i++;
	}

    //  case l,r point to same element
	if(i%2==0)
		Seraja += *l;
	else
		Dima += *l;

	cout << Seraja << " " << Dima << endl;

	delete l;
	delete r;

	return 0;
}
