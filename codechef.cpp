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
    int n, k;
    cin >> n >> k;

    if (k==n)
    {
        for(int i=1;i<=n;i++)
        cout<<i<<" ";
        cout<<"\n";
        return;
    }
    int a[n + 1];

    for (int i = 1; i <= n; i++)
        a[i] = i;
    cout << n - k + 1 << " ";
    for (int i = 1; i <= n - k; i++)
    {
        cout << i << " ";
    }
    for (int i = n - k + 2; i <= n; i++)
        cout << i << " ";
    cout << "\n";
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