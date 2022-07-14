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
		float u, v, a, s, V;
		cin >> u >> v >> a >> s;
		V = (u * u - 2 * a * s);
		if (V <= v*v)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
