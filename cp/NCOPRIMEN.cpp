#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, a[100000];
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		for (int i = 0; i < n; ++i)
		{
			if (i % 3 == 0)
				continue;
			if (i % 3 == 1)
				a[i] = a[i - 1] * 2;
			if (i % 3 == 2)
			{
				if (i + 1 < n)
					a[i] = a[i + 1] * 2;
				else
					a[i] = a[i - 1];
			}
		}
		for (int i = 0; i < n; ++i)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
