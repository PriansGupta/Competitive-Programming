#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpi;
typedef vector<LL> vl;
typedef vector<vl> vvl;
#define ll long long int
#define lll unsigned long long
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
const int M = 1e9 + 7;
const int m = 1e9 + 7;
int a[200005];
// memset(lookup, 0, sizeof(lookup))
int moadd(int a, int b)
{
    return ((a % m) + (b % m)) % m;
}

int mosub(int a, int b)
{
    return ((a % m) - (b % m)) % m;
}

int momul(int a, int b)
{
    return ((a % m) * (b % m)) % m;
}

int modiv(int a, int b)
{
    return ((a % m) / (b % m)) % m;
}

int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int bin(int a, int b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}
int bin_Mul(long long a, long long b)
{
    int ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}
bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool vowelCheck(char ch)
{
    if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')
        return true;

    return false;
}

void solve()
{
    int n;
    cin >> n;

    unordered_map<int, int> mp;

    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        mx = max(mx, mp[x]);
    }

    int ans=n-mx;
    while (mx < n)
    {
        ans++;
        mx=mx<<1;
    }

    cout << ans << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
}