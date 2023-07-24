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

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> as(n);
    vector<int> b(n);
    vector<int> bs(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<pair<int, int>> vp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] >= a[j] and b[i] >= b[j]))
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
                vp.push_back({i, j});
            }
            else if (a[i]<= a[j] and b[i]<= b[j])
                continue;
            else
            {
                cout << "-1\n";
                return;
            }
        }
    }

    cout << vp.size() << "\n";

    for (auto x : vp)
        cout << x.first << " " << x.second << "\n";
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