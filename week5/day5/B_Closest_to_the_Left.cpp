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
    int n, tc; 
    cin >> n >> tc;
    vector<ll> arr(n);
    for (int i =0; i<n; i++) cin >> arr[i];

    while(tc--)
    {
        ll x; cin >> x;

        int ans = upper_bound(all(arr), x) - arr.begin();
        cout << ans<<nl; 
    }   
}