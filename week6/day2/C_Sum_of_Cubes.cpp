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

const ll N = 1e4+4;
set<ll> st;
// ll dp[N];

void pre(void)
{
    ll tmp;
    for (ll i =1; i<N; i++)
    {
        tmp = i*i*i;
        st.insert(tmp);
    }
}

int main()
{
    fast_io; pre();

    int tc; cin >> tc;
    while(tc--)
    {
        bool flag = false;
        ll x, tmp; cin >> x;

        for (ll it: st)
        {
            tmp = x - it;
            if (st.count(tmp))
            {
                flag = true;
                break;
            }
        }

        if (flag)YES;
        else NO;
    }
      
}