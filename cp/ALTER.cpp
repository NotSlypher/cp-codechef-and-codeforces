#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b, p, q, d, e;
		cin >> a >> b >> p >> q;
		d = p / a;
		e = q / b;
		if (p % a == 0 && q % b == 0)
		{
			if (d - e >= -1 && d - e <= 1)
			{
				cout << "yes\n";
			}
			else
				cout << "no\n";
		}
		else
		{
			cout << "no\n";
		}
	}
	return 0;
}
