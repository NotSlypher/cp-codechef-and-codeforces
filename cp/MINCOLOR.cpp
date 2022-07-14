#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vin(v,n)     for(ll i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, m, x1, y1, x2, y2;
		cin >> n >> m >> x1 >> y1 >> x2 >> y2;
		x1--;
		y1--;
		x2--
		if((x1+y1)%2 != (x2+y2)%2)
		{
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					if ((i + j) % 2 == (x1 + y1) % 2)
						cout << 1 << " ";
					else
						cout << 2 << " ";
				}
				cout << "\n";
			}
			continue;
		}
		vector<vll> matrix;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if ((i + j) % 2 == (x1 + y1) % 2)
					matrix[i][j] = 1;
				else
					matrix[i][j] = 2;
			}
		}
		matrix[x2 - 1][y2 - 1] = 2;
		matrix[x1 - 1][y1 - 1] = 1;
		if (x2 > 1)
			matrix[x2 - 2][y2 - 1] = 3;
		if (x2 < n) 
			matrix[x2][y2 - 1] = 3;
		if (y2 > 1)
			matrix[x2 - 1][y2 - 2] = 3;
		if (y2 < m)
			matrix[x2 - 1][y2] = 3;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
