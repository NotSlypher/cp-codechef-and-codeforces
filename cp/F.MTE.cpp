#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x); v[i]%2 ? cnto++ : cnte++;}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int test = 1; test <= t; ++test)
	{
		ll n, cnte = 0, cnto = 0;
		cin >> n;
		vll a;
		vin(a, n);
		cout << (cnto % 2 ? cnte : min(cnte, cnto / 2)) << endl;
	}
	return 0;
}
