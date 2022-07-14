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
			ll mod = 998244353;
	        ll n;
	        cin >> n;
	        string s;
	        cin >> s;

	        ll a[100000] = { 0 };
	        if (s[0] == '1')
		        a[0] = 1;

			ll prev = a[0];

	        for (ll i = 1; i < n; i++)
	        {
	            if (s[i] == '1')
		            prev += (i + 1);
	            a[i] = prev;
	            a[i] = a[i] % 2;
	        }

	        ll p = 1;
	        ll ans = 0;
	        for (ll i = n - 1; i >= 0; i--)
			{
	            if (a[i] == 1)
	            {
	                ans += p;
	                ans = ans % mod;
	            }
	            p = p * 2;
	            p = p % mod;
	        }
	        cout << ans % mod << "\n";

		}
		return 0;
	}
