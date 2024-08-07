#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define nl "\n"
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
#define sqrt(x) sqrtl(x)
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define input(arr) for(auto &it: arr) cin>>it
#define output(arr) for(auto &it: arr) cout<<it<<" "; cout<<nl
#define vec2d(name,n,m,val) vector<vector<int>>(name)((n),vector<int>((m),(val)))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main()
{
    fast_io;
    int n; cin >> n;
    vector<int> arr(n);
    input(arr);
    // output(arr);

    sort(all(arr));
    map<int,int> mp;

    for (int i =0; i<n; i++)    
    {
        for (int j =i+1; j<n; j++)
        {
            int tmp = arr[i]+arr[j];
            // cout << tmp<<" ";
            mp[tmp]++;
        }
    }

    int mx, x;
    mx = -1;
    for (auto it: mp)
    {
        // cout<< it.first<<"->"<<it.second<<nl;
        if(mx < it.second) 
        {
            mx = it.second;
            x = it.first;
        }
    }

    cout << mp[x]<<nl;
}