#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		cout << n / gcd(n, k) << endl;
	}
	return 0;
}
