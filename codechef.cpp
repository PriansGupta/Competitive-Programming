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

int n,a,b;

cin>>a>>b;


}

int main(){     

    int t;
    cin>>t;

    
    while(t--)
    {
    solve();
    }
}