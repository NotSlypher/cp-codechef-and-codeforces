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
		ll n, k, ans = pow(10, 9);
		cin >> n >> k;
		vll a;
		vin(a, n);
		sort(all(a));
		for (int i = 0; i < n-k+1; ++i)
			ans = min(a[i + k-1] - a[i], ans);
		cout << ans << endl;
	}
	return 0;
}
