#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll unsigned long long
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
const lll N = 1e12 + 1;

void solve(int t)
{

  ll n, x, y;
  cin >> n >> x >> y;

  ll sum = (n * (n + 1)) / 2;

  ll c = 1;
  ll temp = c * x + c * y;
  bool f = false;

  if (temp == sum)
    f = true;

  while (temp < sum)
  {
    c++;
    temp = c * x + c * y;
    if (temp == sum)
    {
      f = true;
      break;
    }
  }
  if (!f)
    cout << "Case #" << t << ": "
         << "IMPOSSIBLE"
         << "\n";

  else
  {
    cout << "Case #" << t << ": "
         << "POSSIBLE"
         << "\n";

    ll subsum = c * x;
    vector<int> p;

    for (int i = n; i >= 1; i--)
    {
      if (i <= subsum)
      {
        p.push_back(i);
        subsum -= i;
      }
    }
    cout << p.size() << "\n";
    for (auto x : p)
      cout << x << " ";
    cout << "\n";
  }
}

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  int x = 1;
  while (x <= t)
  {
    solve(x);
    x++;
  }
}