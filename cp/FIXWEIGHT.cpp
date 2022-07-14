#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vin(v,n)     for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
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
		ll n, x;
		cin >> n >> x;
		if (n >= x)
			cout << "YES\n";
		else
		{
			ll a = (n / 2) + 1;
			ll b = (n - a + 1) * a;
			if (x > b)
				cout << "NO\n";
			else
			{
				ll cnt = 0;
				for (int i = 1; i <= n + 1; ++i)
				{
					if (x % i == 0)
					{
						if (n - i + 1 >= x/i)
						{
							cnt = 1;
							break;
						}
					}
				}
				if (cnt)
				{
					cout << "YES\n";
				}
				else
					cout << "NO\n";
			}

		}
	}
	return 0;
}
