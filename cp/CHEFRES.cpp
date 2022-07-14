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
		int n, m;
		cin >> n >> m;
		vector<pair<int, int>> ar;
		for (int i = 0; i < n; ++i)
		{
			int a, b;
			cin >> a >> b;
			pair<int, int> x(a, b);
			ar.push_back(x);
		}

		sort(ar.begin(), ar.end());

		while (m--)
		{
			int x;
			cin >> x;
			int ind = lower_bound(ar.begin(), ar.end(), make_pair(x, 0)) - ar.begin();

			if (ar[ind].first == x)
			{
				cout << 0 << "\n";
			}
			else
			{
				--ind;
				if (x >= ar[ind].first && x < ar[ind].second)
				{
					cout << 0 << "\n";
				}
				else
				{
					++ind;
					if (ind == n)
					{
						cout << -1 << "\n";
					}
					else
					{
						cout << ar[ind].first - x << "\n";
					}
				}
			}
		}
	}
	return 0;
}
