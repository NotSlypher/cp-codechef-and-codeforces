#include<bits/stdc++.h>
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
	for (int test = 0; test < t; ++test)
	{
		ll n, cnt =1;
		vll a;
		cin >> n;
		vin(a, n);
		sort(all(a));
		for (int i = 0; i < n; ++i)
			if (a[i] > cnt)
				cnt++;
		cout << "Case #" << test << ": " << cnt - 1 << endl;
	}
	return 0;
}
