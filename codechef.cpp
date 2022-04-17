#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll unsigned long long
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define ub upper_bound
const int M = 1e9 + 7;

int bin(int a, int b)
{
    int ans = 1;
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

void solve()
{
    int n;
    cin >> n;

    int one = 0, two = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            one++;
        else if (x == 2)
            two++;
    }

    ll ans = one * (n-one-two) + (two * (two - 1)) / 2 +two*one+(one * (one - 1)) / 2;

    cout << ans << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}