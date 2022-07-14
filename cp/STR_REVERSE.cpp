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
		cin >> s;
		string r = s;
		reverse(r.begin(), r.end());
		ll i = 0, j = 0, ans = 0;
		for (; i < r.length(); i++)
		{
			if (s[i] == r[j])
				j++;
			else
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
