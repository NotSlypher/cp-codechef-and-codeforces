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
		int a[10], k;
		for (int& i : a)
			cin >> i;
		cin >> k;
		int i = 9;
		while (k>=a[i])
		{
			k -= a[i];
			i--;
		}
		cout << i + 1 << endl;

	}
	return 0;
}
