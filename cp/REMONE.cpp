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
		ll n;
		cin >> n;
		vll a, b;
		vin(a, n);
		vin(b, n - 1);
		set<int> s;
		for (int i = 0; i < n; ++i)
		{
			int x = a[i];
			s.insert(x);
		}
		sort(all(a));
		sort(all(b));
		ll ans = b[0] - a[1];
		for (long long i : b)
		{
			if(s.count(i-ans) == 0)
			{ 
				ans = b[0] - a[0];
				break;
			}
		}
		if (ans <= 0)
			ans = b[0] - a[0];
		cout << ans << endl;
	}
	return 0;
}
