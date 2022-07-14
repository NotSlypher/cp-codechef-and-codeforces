#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const int MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);

bool cmp(const pair<ll, ll>& x, const pair<ll, ll>& y)
{
	if (x.first == y.first)
		return (x.second < y.second);
	else
		return (x.first < y.first);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int test = 1; test <= t; ++test)
	{
		ll n, r, res = 0, cnt = 0;
		cin >> n >> r;
		vll a, b;
		vector<pair<ll, ll>> diff;
		vin(a, n);
		vin(b, n);
		for (int i = 0; i < n; ++i)
			diff.push_back(make_pair((a[i] - b[i]), a[i]));
		sort(all(diff), cmp);
		while (r > 0 && res < n)
		{
			if (r >= diff[res].second) {
				ll temp = (r - diff[res].second) / (diff[res].first) + 1;
				r -= diff[res].first * temp;
				cnt += temp;
			}
			else
				res++;
		}
		cout << cnt << endl;
	}
	return 0;
}

int fpow(int x, int y)
{
	x = x % MOD;
	int sum = 1;
	while (y)
	{
		if (y & 1)sum = sum * x;
		sum %= MOD;
		y = y >> 1;
		x = x * x;
		x %= MOD;
	}
	return sum;
}

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}