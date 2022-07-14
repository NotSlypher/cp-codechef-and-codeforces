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
		ll n, k, a[100000];
		cin >> n >> k;
		for (int i = 0; i < n; ++i)
			a[i] = i + 1;
		if (n == 1)
			cout << 1 << endl;
		else
		{
			int swt = 0;
			k = n - k;
			while (k--)
			{
				swap(a[swt], a[swt + 1]);
				swt++;
			}
			for (int i = 0; i < n; ++i)
				cout << a[i] << " ";
			cout << endl;
		}
	}
	return 0;
}
