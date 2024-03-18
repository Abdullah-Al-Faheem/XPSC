#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define endl "\n"
#define nl "\n"
#define ll long long
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast_io;
    ll n, m;
    cin >> n>> m;

    map<ll,ll > mp;
    ll tmp;

    for (ll i=0; i<n; i++) 
    {
        cin >> tmp; 
        mp[tmp]++;
    }

    ll ans = 0;
    for (ll i=0; i<m; i++)
    {
        cin >> tmp;

        ans += mp[tmp];
    }   

    cout << ans<<nl;
}