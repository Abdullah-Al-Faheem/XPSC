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
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<ll> arr(n);
        vector< pair<ll, ll> > vp(n);
        map<ll,ll> mp;

        for (int i =0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = i+1;
        } 

        ll mn = LLONG_MAX;
        for (int i =0; i<n; i++)
        {
            mn = min(mn, arr[i]);
            vp[i].first = mn;
        }

        mn = LLONG_MAX;
        for (int i =n-1; i>= 0; i--)
        {
            mn = min(mn, arr[i]);
            vp[i].second = mn;
        } 


        int flag = 1;
        ll a, b, c;
        for (int i =1; i<n-1; i++)
        {
            if (vp[i-1].first < arr[i] and vp[i+1].second < arr[i])
            {

                YES;

                a = vp[i-1].first;
                b = arr[i];
                c = vp[i+1].second;

                cout << mp[a]<<" "<< mp[b]<<" "<< mp[c]<<nl;
                flag = 0;
                break;

            }
        }

        if (flag) NO;

    }   
}