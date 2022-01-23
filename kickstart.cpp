#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll unsigned long long
#define ff first
#define ss second 
#define all(v) v.begin(),v.end()

void solve(){

int n;
cin>>n;

vector<pair<char,char>> v;

for(int i=0;i<n-2;i++)
{
  string s;
  cin>>s;

  v.push_back(make_pair(s[0],s[1]));
}
vector<char> ans;
ans.push_back(v[0].ff);
for(int i=0;i<n-3;i++)
{
  if(v[i].ss==v[i+1].ff)
  ans.push_back(v[i].ss);

  else
  {
  ans.push_back(v[i].ss);
  ans.push_back(v[i+1].ff);
  }
}

if(ans.size()==n-1)
ans.push_back(v[n-3].ss);

if(ans.size()==n-2)
{
ans.push_back(v[n-3].ss);
ans.push_back(v[n-3].ss);

}

for(auto x:ans)
cout<<x;
cout<<"\n";
}
 
int main(){     

    int t;
    cin>>t;

    while(t--)
    {
    solve();
    }

}