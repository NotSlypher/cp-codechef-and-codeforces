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
		ll n, w, a[100], sum = 0, cnt = 0;
		cin >> n >> w;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		ll i = n;
		while(sum < w)
		{
			i--;
			sum += a[i];
			cnt++;
		}
		cout << n - cnt << endl;
	}
	return 0;
}
