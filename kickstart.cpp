#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll unsigned long long
#define ff first
#define ss second
#define all(v) v.begin(), v.end()

void solve(int t)
{
  ll n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];

  int curAns;
  int curMx;

  cout << "Case #" << t << ": " << 1 << " ";

  curAns = 1;
  curMx = v[0];

  for (int i = 1; i < n; i++)
  {
    curMx = max(curMx, v[i]);
    curAns = min(v[i], min(curAns, v[i]));
    cout <<curAns << " ";
  }
  cout<<"\n";
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