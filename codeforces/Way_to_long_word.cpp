#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
#define db(x)       cout<<#x<<"="<<x<<'\n'
#define db2(x,y)    cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z)  cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define f(i,n)      for(ll i=0;i<(n);++i)
#define fA(i,a,n)   for(ll i=a;i<=(n);++i)
#define fD(i,a,n)   for(ll i=a;i>=(n);--i)
#define fC(x)       for(auto &c : x)
#define all(x)      (x).begin(), (x).end()
#define allr(v)     (x).rbegin(), (x).rend()
#define fr(itr,a)   for(auto itr = a.begin(); itr != a.end(); itr++)
#define lbd         lower_bound
#define ubd         upper_bound
#define lb(a,x)     lower_bound(all(a), x)
#define ub(a,x)     upper_bound(all(a), x)
#define clr(x)      memset(x,0,sizeof(x))
#define fill(x,a)   memset(x,a,sizeof(x))
#define sss         <<" "<< 
#define nn          '\n' 
#define ff          first
#define ss          second          
#define mp          make_pair
#define pb          push_back
#define PI          3.141592653589793238
#define YES         cout<<"YES\n"
#define NO          cout<<"NO\n"
#define Yes         cout<<"Yes\n"
#define No          cout<<"No\n"
#define ansr        cout<<ans<<nn
#define p2d(arr,n,m)    f(i,n){f(j,m)cout<<arr[i][j]<<" "; cout<<nn;}
#define pd(arr,n)       f(i,n) cout<<arr[i]<<" "; cout<<nn;
#define setin(x)    __builtin_popcount(x)
#define cto(x)      __builtin_ctz(x)
#define clo(x)      __builtin_clz(x) 
#define UM          unordered_map
typedef pair<string, ll>       psl;
typedef pair<string, string>   pss;
typedef pair<ll,ll>     pll ;
typedef pair<int,int>   pii ;
typedef pair<char,ll>   pcl ;
typedef pair<char,int>  pci ;
typedef vector<int>     vi  ;
typedef vector<ll>      vll ;
typedef vector<pll>     vpll;
typedef vector<vll>     vvll;
typedef  map<string,ll>         msl;
typedef  map<ll, ll>            mll;
typedef  map<int,int>           mii; 
typedef  map<char,ll>           mcl; 
typedef  map<ll,string>         mls;
const ll MOD = 1e9 + 7;  
 
using namespace std;
int main(){
     ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        ll len = s.size();
        if(len<=10) cout<<s<<nn;
        else cout<<s[0]<<len-2<<s[len-1]<<endl;
    }
    return 0;
}