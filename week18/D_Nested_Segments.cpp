#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define pi acos(-1.0)
#define nl "\n"
#define int long long
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define sqrt(x) sqrtl(x)
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
    vector<pair<int,int> > vec;
    vector<int> arr;

    int a, b;

    while(tc--)
    {
        cin >> a>> b;
        arr.push_back(a);

        vec.push_back({a,b});   
    }

    sort(all(vec));

    pbds<int > p;
    
    map<int,int> mp;

    while(!vec.empty())
    {
        a = vec.back().first;
        b = vec.back().second;

        // cout << a<<" "<<b<<nl;
        vec.pop_back();
        
        p.insert(b);

        mp[a]= p.order_of_key(b);
    }

    for (int i =0; i<arr.size(); i++)
    {
        cout <<mp[arr[i]]<<nl;
    }
    

}