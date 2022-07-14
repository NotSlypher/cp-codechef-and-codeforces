#include"bits/stdc++.h"
using namespace std;

#define ll long long int
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for(int k = 1; k <= t; ++k)
	{
		char a[21][21];
		int r, c;
		cin >> r >> c;
		for (int i = 0; i < 2*r+1; ++i)
		{
			for (int j = 0; j < 2*c+1; ++j)
			{
				if(i % 2 == 0)
				{
					if (j % 2 == 0)
						a[i][j] = '+';
					else
						a[i][j] = '-';
				}
				else
				{
					if (j % 2 == 0)
						a[i][j] = '|';
					else
						a[i][j] = '.';
				}
				if (i == 0 || i == 1) {
					if (j == 0 || j == 1)
						a[i][j] = '.';
				}
			}
		}
		cout << "Case #" << k << ":\n";
		for (int i = 0; i < 2 * r + 1; ++i)
		{
			for (int j = 0; j < 2 * c + 1; ++j)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}