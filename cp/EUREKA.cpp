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
		double long N, x;
		cin >> N;
		x = pow(0.143 * N, N);
		ll ans = ll(x + 0.5);
		cout << ans << endl;
	}
	return 0;
}
