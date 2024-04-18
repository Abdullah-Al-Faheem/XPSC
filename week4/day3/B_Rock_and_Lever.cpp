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

ll nC2(ll n)
{
    return ( (n*(n-1)) /2);
}

int main()
{
    fast_io;
    ll tc; cin >> tc;
    while(tc--)
    {
        ll n; cin >> n;

        ll tmp;

        map<ll,ll> mp;

        for (ll i =0; i<n; i++)
        {
            cin >> tmp;

            mp[__lg(tmp)]++;

        }     

        ll ans = 0;
        for (auto it : mp)
        {
            if (it.second >= 2) ans += nC2(it.second);
        }

        cout << ans<<nl;


    }   
}