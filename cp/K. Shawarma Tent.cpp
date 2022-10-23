/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const int MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);
int test = 1;

void Slypher()
{
    int n, x, y, x1, y1;
    ll a[200000];
    for (int i = 0; i < 4; i++)
        a[i] = 0;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1;
        if (x1 > x)
            a[0]++;
        if (x1 < x)
            a[1]++;
        if (y1 > y)
            a[2]++;
        if (y1 < y)
            a[3]++;
    }
    //cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << '\n';
    if (a[0] >= a[1] && a[0] >= a[2] && a[0] >= a[3]) {
        cout << a[0] << '\n' << x + 1 << ' ' << y << '\n';
    }
    else if (a[1] >= a[0] && a[1] >= a[2] && a[1] >= a[3]) {
        cout << a[1] << '\n' << x - 1 << ' ' << y << '\n';
    }
    else if (a[2] >= a[1] && a[2] >= a[0] && a[2] >= a[3]) {
        cout << a[2] << '\n' << x << ' ' << y + 1 << '\n';
    }
    else if (a[3] >= a[1] && a[3] >= a[2] && a[3] >= a[0]) {
        cout << a[3] << '\n' << x << ' ' << y - 1 << '\n';
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
	for (test = 1; test <= t; ++test)
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

