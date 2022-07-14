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
		string s;
		ll n;
		cin >> n >> s;
		ll cnt = 0;
		for (int i = 1; i < n; ++i)
		{
			if (s[i - 1] == s[i])
				cnt++;
		}
		cout << n - cnt << endl;
	}
	return 0;
}
