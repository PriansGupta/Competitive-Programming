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
    string s;
    cin >> s;

    int ans = INT_MIN;
    int c = 1;
    char ch = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (ch == s[i])
        {
            c++;
        }
        else
        {
            ch = s[i];
            ans = max(ans, c);
            c = 1;
        }
    }
    ans = max(ans, c);

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}