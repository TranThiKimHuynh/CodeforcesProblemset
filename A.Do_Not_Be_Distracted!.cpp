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
	cin >> t;
	while (t--)
	{
		int n, flag = 0;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] != s[i + 1])
			{
				for (int j = i + 1; j < n; j++)
					if (s[i] == s[j])
						flag = 1;
			}
		}
		if (flag == 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}