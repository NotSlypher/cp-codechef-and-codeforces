/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
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

bool palindrome(vll arr, int n)
{
	// Initialise flag to zero.
	int flag = 0;

	// Loop till array size n/2.
	for (int i = 0; i <= n / 2 && n != 0; i++) {

		// Check if first and last element are different
		// Then set flag to 1.
		if (arr[i] != arr[n - i - 1]) {
			flag = 1;
			break;
		}
	}

	// If flag is set then print Not Palindrome
	// else1 print Palindrome.
	return !flag;
}

void Slypher()
{
	ll n;
	cin >> n;
	vector<long long> a,b(n/2);
	vin(a, n);
	if (palindrome(a, n))
	{
		cout << "0\n";
		return;
	}
	bool f = 0;
	for (int i = 0; i < n / 2; ++i)
		b[i] = a[n - 1 - i] - a[i];
	ll m = n / 2;
	for (int i = 0; i < m - 1; ++i)
	{
		if (b[i] < b[i + 1])
		{
			f = 1;
		}
	}
	if(f)
	{
		cout << "-1\n";
		return;
	}
	cout << *max_element(all(b)) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
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
