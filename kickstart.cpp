#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll unsigned long long
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
const ll N=1e6+1;

lll S[N];

void solve(int t)
{

ll a,b;
cin>>a>>b;

int cnt=0;
for(ll i=a;i<=b;i++){

  ll n=i;
  ll f=1;
  ll s=0;

  while(n){
    int r=n%10;
    f*=r;
    s+=r;
    n/=10;
  }

  if(f%s==0)
  cnt++;
}
cout << "Case #" << t << ": "<<cnt<<"\n";
}

int main()
{

  cout<<S[0];
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