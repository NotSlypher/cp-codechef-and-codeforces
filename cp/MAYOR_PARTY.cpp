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
		ll a, b, c;
		cin >> a >> b >> c;
		if (b >= a+c)
			cout << b << endl;
		else
			cout << a + c << endl;
	}
	return 0;
}
