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
		ll n, k, x = 0, a[100000];
		cin >> n >> k;
		for (int i = 0; i < k; ++i)
			cin >> a[i];
		for (int i = 0; i < k; ++i)
		{
			ll j = a[i];
			while (j > x)
				cout << j-- << " ";
			x = a[i];
		}
		cout << endl;
	}
	return 0;
}
