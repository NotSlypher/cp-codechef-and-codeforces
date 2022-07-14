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
		ll n, a[1000000];
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < n; ++i)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
