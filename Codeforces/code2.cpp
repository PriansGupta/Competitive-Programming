#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
#define ll long long int
#define lll unsigned long long
#define ff first
#define ss second 
#define all(v) v.begin(),v.end()
const int M=1e9+7;
const int m=1e9+7;

int moadd(int a, int b) { 
    return ((a % m) + (b % m)) % m; 
    }

int mosub(int a, int b) {
     return ((a % m) - (b % m)) % m; 
     }

int momul(int a, int b) { 
    return ((a % m) * (b % m)) % m; 
    }

int modiv(int a, int b) { 
    return ((a % m) / (b % m)) % m; 
    }

int lcm(int a, int b) {
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
int bin(int a,int b){
    int ans=1;
    while(b){
        if(b & 1){
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b>>=1;
    }
    return ans;
}
int bin_Mul(long long a,long long b){
   int ans=0;
    while(b){
        if(b & 1){
            ans=(ans+a)%M;
        }
        a=(a+a)%M;
        b>>=1;
    }
    return ans;
}
bool isprime(int n){
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

bool vowelOrConsonant(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||
                   x == 'o' || x == 'u')
        return true;
    else
        return false;
}

void solve(){

int n,k;
cin>>n>>k;

vector<pair<int,int>> v;

for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    v.push_back(make_pair(a,i));
}
int b[n];
for(int i=0;i<n;i++)
cin>>b[i];

sort(v.begin(),v.end());

for(int i=0;i<n;i++){
    if(k>=v[i].first)
    {
        k+=b[v[i].second];
    }
    else{
        break;
    }
}

cout<<k<<"\n";
}


int main(){     
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
    solve();
    }

}