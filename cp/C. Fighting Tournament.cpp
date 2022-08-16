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
    ll n, q; 
    cin >> n >> q;
    vll a;
    vin(a, n);
    vll start, finish;
    for (int i = 0; i < n; ++i)
    {
        start.push_back(1);
        finish.push_back(INT_MAX);
    }
    ll itr = 0;
    for (ll i = 1; i < n; i++)
    {
        start[i] = i;
        if (a[itr] <= a[i])
        {
	        finish[itr] = i;
	        itr = i;
        }
        else
	        finish[i] = i;
    }
    for (int j = 1; j <= q; j++)
    {
        ll idx,right;
    	cin >> idx >> right;
        idx = idx - 1;
        if (finish[idx] == INT_MAX)
        {
            if (right < start[idx])
	            cout << "0\n";
            else
            {
	            ll x = right;
	            cout << x - start[idx] + 1 << "\n";
            }
        }
        else {
            if (right < start[idx])
	            cout << "0\n";
            else {
	            ll x = min(right, finish[idx] - 1);
	            cout << x - start[idx] + 1 << "\n";
            }
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
