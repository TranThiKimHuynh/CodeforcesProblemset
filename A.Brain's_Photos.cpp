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

	int n, m;
	cin >> n >> m;
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char color;
			cin >> color;
			if (color == 'C' || color == 'M' || color == 'Y')
			{
				flag = 0;
			}
		}
	}
	if (flag)
		cout << "#Black&White" << endl;
	else
		cout << "#Color" << endl;

	return 0;
}