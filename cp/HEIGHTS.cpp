	/*
	Slypherx - Ayush Gupta
	Pune Institute of Computer Technology
	*/

	#include<iostream>
	#include <vector>
	#include <map>
	#include <algorithm>
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
		ll n, cnt = 0, ans = 1;
		cin >> n;
		bool f = 1, p = 1;
		vll a, b, c;
		vin(a, n)
		map<ll, ll> freq;
		for (int i = 0; i < n; ++i)
		{
			freq[a[i]]++;
		}
		for (auto value : freq)
		{
			if (value.second == 1)
			{
				cnt++;
				b.push_back(value.first);
			}
			else
				c.push_back(value.second);
		}
		if(cnt == 1)
		{
			if (*max_element(all(a)) == b[0])
			{
				if (*max_element(all(c)) <= 2)
					ans = *max_element(all(c));
			}
			cnt++;
			cout << ans << endl;
			return;
		}
		cout << ((cnt + 1) / 2) << endl;
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
