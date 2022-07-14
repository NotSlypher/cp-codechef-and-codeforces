/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const ll MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);

int mod_mul(int a, int b, int m) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }

long int pow(long int b, long int exp, long int mod)
{
    long int ret = 1;

    while (exp > 0) {
        if ((exp & 1) > 0)
            ret = (ret * b) % mod;
        b = (b * b) % mod;
        exp >>= 1;
    }

    return ret;
}

int nCr(int n, int r)
{
    // base case
    if (r > n)
        return 0;

    // C(n,r) = C(n,n-r) Complexity for
    // this code is lesser for lower n-r
    if (n - r > r)
        r = n - r;

    // list to smallest prime factor
    // of each number from 1 to n
    int SPF[n + 1];

    // set smallest prime factor of each
    // number as itself
    for (int i = 1; i <= n; i++)
        SPF[i] = i;

    // set smallest prime factor of all
    // even numbers as 2
    for (int i = 4; i <= n; i += 2)
        SPF[i] = 2;

    for (int i = 3; i * i < n + 1; i += 2) {

        // Check if i is prime
        if (SPF[i] == i) {
            // All multiples of i are
            // composite (and divisible by
            // i) so add i to their prime
            // factorization getpow(j,i)
            // times
            for (int j = i * i; j < n + 1; j += i)
                if (SPF[j] == j) {
                    SPF[j] = i;
                }
        }
    }
    // Hash Map to store power of
    // each prime in C(n,r)
    map<int, int> prime_pow;

    // For numerator count frequency of each prime factor
    for (int i = r + 1; i < n + 1; i++) {

        int t = i;

        // Recursive division to find
        // prime factorization of i
        while (t > 1) {
            if (!prime_pow[SPF[t]]) {
                prime_pow[SPF[t]] = 1;
            }
            else
                prime_pow[SPF[t]]++;
            // prime_pow.put(SPF[t],
            // prime_pow.getOrDefault(SPF[t], 0)
            // + 1);
            t /= SPF[t];
        }
    }

    // For denominator subtract the power of
    // each prime factor
    for (int i = 1; i < n - r + 1; i++) {
        int t = i;

        // Recursive division to find
        // prime factorization of i
        while (t > 1) {
            prime_pow[SPF[t]]--;
            // prime_pow.put(SPF[t],
            // prime_pow.get(SPF[t]) - 1);
            t /= SPF[t];
        }
    }

    // long because mod is large and a%mod
    // * b%mod can overflow int
    long int ans = 1, mod = 1000000007;

    // use (a*b)%mod = (a%mod * b%mod)%mod
    for (auto it : prime_pow)

        // pow(base,exp,mod) is used to
        // find (base^exp)%mod fast
        ans = (ans
            * pow(it.first, prime_pow[it.first], mod))
        % mod;
    return (ll)ans;
}

void Slypher()
{
	ll n, l, r;
	cin >> n >> l >> r;
	for(ll i = l; i <= r;i++)
	{
		if (i % 2 != n % 2)
			cout << "0 ";
		else
			cout << nCr(n, n / 2 - abs(i) / 2) << " ";
	}
	cout << endl;
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
