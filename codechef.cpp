#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll unsigned long long
#define ff first
#define ss second 
#define all(v) v.begin(),v.end()
const int M=1e9+7;
ll a[110];
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
int checkABC(int i,string s){
    return (s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')==true?1:0;
}

void solve(){

int n,q;
cin>>n>>q;

string s;
cin>>s;

int w=0;
for(int i=0;i<n-2;i++)
w+=checkABC(i,s);
// cout<<w;
// cout<<endl;
// cout<<endl;
while(q--)
{
    int y;
    char ch;
    cin>>y>>ch;
    y--;
    if(s[y]=='a'){
        if(y+2<n and s[y+1]=='b' and s[y+2]=='c') w--;
    }
    else if(s[y]=='b'){
        if(y-1>-1 and y+1<n and s[y-1]=='a' and s[y+1]=='c') w--;
    }
    else{
        if(y-2>-1 and s[y-1]=='b' and s[y-2]=='a') w--;
    }

    s[y]=ch;

    if(s[y]=='a'){
        if(y+2<n and s[y+1]=='b' and s[y+2]=='c') w++;
    }
    else if(s[y]=='b'){
        if(y-1>-1 and y+1<n and s[y-1]=='a' and s[y+1]=='c') w++;
    }
    else{
        if(y-2>-1 and s[y-1]=='b' and s[y-2]=='a') w++;
    }
    cout<<w<<endl;
}
}

int main(){     

    // int t;
    // cin>>t;

    // while(t--)
    // {
    // solve();
    // }
solve();
}