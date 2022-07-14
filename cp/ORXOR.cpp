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
		ll n, x, maxVal;
		cin >> n >> x;
		maxVal = 1 << (ll)log2(n) + 1;

		if(x >= maxVal || (n == 2 && x != 3) || ((n&(n-1)) == 0 && ((n&x)==0)))
		{
			cout << -1 << endl;
			return;
		}

		if(n == 2 && x == 3)
		{
			cout << "1 1 2" << endl;
			return;
		}

		set<ll> arr1, arr2;
		ll num = 0, com = 0;
		for (int i = 1; i <= n; i++)
			arr1.insert(i);
		for(int i = 0; i <= 20; i++)
		{
			ll p = 1 << i;
			if (p > n)break;

			if((p & x) == 0)
			{
				arr1.erase(p);
				arr2.insert(p);
			}
		}

		if (!arr1.empty())
		{
			num = *arr1.begin();
			arr1.erase(num);
			for (auto value : arr1)
			{
				cout << 1 << " " << num << " " << value << endl;
				num = num | value;
			}
		}

		if (!arr2.empty())
		{
			com = *arr2.begin();
			arr2.erase(com);
			for (auto value : arr2)
			{
				cout << 1 << " " << com << " " << value << endl;
				com = com | value;
			}
		}

		if(com > 0 && num > 0)
			cout << 2 << " " << com << " " << num << endl;
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
