/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const int MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);

void Slypher()
{
	ll nums, queries, cnt = 0;
	cin >> nums >> queries;

	ll array[nums], ans[nums], q[queries];
	for (int i = 0; i < nums; i++)
	{
		cin >> array[i];
	}
	for (ll i = 0; i < queries; i++)
		cin >> q[i];

	sort(array, array + nums, greater<ll>());
	for (ll i = 0; i < nums; i++)
	{
		cnt = cnt + array[i];
		ans[i] = cnt;
	}

	for (ll i = 0; i < queries; i++)
	{
		if (q[i] > ans[nums - 1])
			cout << -1 << endl;
		else
		{
			ll answer = lower_bound(ans, ans + nums, q[i]) - ans;
			cout << answer + 1 << endl;
		}
	}

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
		Slypher();
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
