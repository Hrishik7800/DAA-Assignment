#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector<ll>
#define vpi vector<pii>
#define inf 1e18
#define mod 1000*1000*1000 + 7
#define mod1 998244353
int main(){
ios_base::sync_with_stdio(0);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
     cin>>n;
     ll a[n];
     a[n-1] = 1;
     a[0] = n;
     if(n == 1){
        cout<<1<<endl;
     }
     else if(n%2 != 0){
        cout<<-1<<endl;
     }else{
        cout<<n<<" ";
        for( int i = n -1; i > 2; i-=2){
            cout<<i<<" "<<n-1-i<<" ";
        }    
     }
}
     return 0;
}