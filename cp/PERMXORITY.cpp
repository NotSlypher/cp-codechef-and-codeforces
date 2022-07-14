#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define seev(v,n)     for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
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
		ll n;
		cin >> n;
		if (n == 2)
			cout << -1 << endl;
		else if(n % 2 != 0) {
			for (int i = 0; i < n; ++i)
				cout << i + 1 << " ";
			cout << endl;
		}
		else
		{
			for (int i = 0; i < n; ++i)
			{
				if (i == 0)
					cout << 1 << " ";
				else if (i == 1)
					cout << n << " ";
				else
					cout << i << " ";
			}
			cout << endl;
		}
	
	}
	return 0;
}
