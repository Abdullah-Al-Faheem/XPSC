#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, 
tree_order_statistics_node_update>;
//order_of_key
//find_by_order

int32_t main()
{
    fast_io;
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<pair<int,int>> arr;
        int l, r;
        

        for (int i =0; i<n; i++)
        {
            cin >> l>> r;
            arr.push_back({l,r});
        }      

        sort(all(arr)); 

        // for (int i =0; i<n; i++)
        // {
        //     cout << arr[i].first<<" "<< arr[i].second<<nl;
        // }
        // cout <<nl;

        pbds<int> p;
        int ans = 0;

        for (int i =n-1; i>= 0; i--)
        {
            // l = arr[i].first;
            r = arr[i].second;

            ans+= p.order_of_key(r);

            p.insert(r);

        }

        cout << ans<<nl;

    }
}