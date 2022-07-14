#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
	while (t--)
	{
		ll n;
		cin >> n;
		if (n % 2 == 0)
			cout << 0 << " " << n / 2 << endl << 0 << " " << -n / 2 << endl << n / 2 << " " << 0 << endl << -n / 2 << " " << 0 << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}

