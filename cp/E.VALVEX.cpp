/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(o,e,n)     for(ll i=0;i<n;i++){ll x; cin>>x; if(x%2==0)e.push_back(x); else o.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const ll MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);

void Slypher()
{
	ll n; cin >> n;
	vll odd;
	vll even;
    vin(odd, even, n);

    sort(odd.begin(), odd.end(), greater<ll>());
    sort(even.begin(), even.end(), greater<ll>());

    //alice even & bob even
    ll a = 0, b = 0;
    ll i = 0;
    while (i < even.size()) {
        a += even[i];
        if (i < odd.size()) {
            a += odd[i];
        }
        else {
            break;
        }
        i += 2;
    }
    i = 1;
    while (i < even.size()) {
        b += even[i];
        if (i < odd.size()) {
            b += odd[i];
        }
        else {
            break;
        }
        i += 2;
    }

    //alice even & bob odd
    ll a2 = 0, b2 = 0;
    i = 0;
    while (i < even.size()) {
        a2 += even[i];
        if (i + 1 < odd.size()) {
            a2 += odd[i + 1];
        }
        else { break; }
        i += 2;
    }
    i = 0;
    while (i < odd.size()) {
        b2 += odd[i];
        if (i + 1 < even.size()) {
            b2 += even[i + 1];
        }
        else { break; }
        i += 2;
    }

    //alice odd & bob even
    ll a3 = 0, b3 = 0;
    i = 0;
    while (i < even.size()) {
        b3 += even[i];
        if (i + 1 < odd.size()) {
            b3 += odd[i + 1];
        }
        else { break; }
        i += 2;
    }
    i = 0;
    while (i < odd.size()) {
        a3 += odd[i];
        if (i + 1 < even.size()) {
            a3 += even[i + 1];
        }
        else { break; }
        i += 2;
    }

    //alice odd & bob odd
    ll a4 = 0, b4 = 0;
    i = 0;
    while (i < odd.size()) {
        a4 += odd[i];
        if (i < even.size()) {
            a4 += even[i];
        }
        else {
            break;
        }
        i += 2;
    }
    i = 1;
    while (i < odd.size()) {
        b4 += odd[i];
        if (i < even.size()) {
            b4 += even[i];
        }
        else {
            break;
        }
        i += 2;
    }

    ll ans_a = 0;
    ll b_ans = max(b, b2);
    if (b_ans == b && b_ans == b2) {
        ans_a = max(a, a2);
    }
    else if (b_ans == b && b_ans != b2) {
        ans_a = a;
    }
    else {
        ans_a = a2;
    }

    ll ans_a2 = 0;
    b_ans = max(b3, b4);
    if (b_ans == b3 && b_ans == b4) {
        ans_a2 = max(a3, a4);
    }
    else if (b_ans == b3 && b_ans != b4) {
        ans_a2 = a3;
    }
    else {
        ans_a2 = a4;
    }
    cout << max(ans_a, ans_a2)<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int test = 1; test <= t; ++test)
	{
		Slypher();
	}
	return 0;
}

int fpow(int x, int y)
{
	x = x % MOD;
	int sum = 1;
	while (y)
	{
		if (y & 1)sum = sum * x;
		sum %= MOD;
		y = y >> 1;
		x = x * x;
		x %= MOD;
	}
	return sum;
}

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
