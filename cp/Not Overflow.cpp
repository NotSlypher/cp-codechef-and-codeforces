#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<int><int>

int main()
{
	ll n;
	cin >> n;
	if (n >= -(pow(2,31)) && n <= pow(2,31) - 1)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}
