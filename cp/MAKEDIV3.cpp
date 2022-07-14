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
		ll n;
		cin >> n;
		ll p = n;
		while (n--)
		{
			if (n == 0 || n == p - 1)
				cout << 3;
			else
				cout << 0;
		}
		cout << endl;
	}
	return 0;
}
