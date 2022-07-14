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
	while (t--)
	{
		ll n, h;
		vll a;
		cin >> n >> h;
		vin(a, n);
		sort(all(a));
		if (h-n==0)
		{
			cout << max((ll)(ceil(a[n-(h-n)-1])), a[n-(h-n)-2]) << endl;
		}
		else
			cout << max((ll)(ceil(a[n-(h-n)]/2)), a[n-(h-n)-1]) << endl;
	}
	return 0;
}
