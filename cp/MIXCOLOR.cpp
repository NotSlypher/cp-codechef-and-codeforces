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
		ll n, a[100000], cnt = 0;
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < n - 1; ++i) {
			if (a[i] == a[i + 1]) {
				a[i] += *max_element(a, a + n);
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
