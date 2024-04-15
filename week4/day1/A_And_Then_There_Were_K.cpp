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
    ll tc; cin >> tc;
    while(tc--)
    {
        ll n; cin >> n;

        ll ans = 0;

        ll tmp;
        for (ll i =31; i>= 0; i--)
        {
            if (n & (1<<i)) 
            {
                for (int j =i-1; j>= 0; j--)
                {
                    ans = (ans ^ (1<<j));
                }
                break;
            }
        }    

        cout << ans<<nl;   
    }   
}