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

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, 
tree_order_statistics_node_update>;
//order_of_key
//find_by_order

int32_t main()
{
    fast_io;
    int n; cin >> n;
    string str, rev;
    cin >> str;
    rev = str;
    reverse(all(rev));
    // cout << rev<<nl;

    pbds<pair<char,int> > p;
    pbds<int> icnt;

    for (int i =0; i<n; i++)
    {
        p.insert({str[i], i});
    }

    // for (auto it : p) cout << it.first<<" "<<it.second<<nl;

    int j = n-1;
    int sum = 0;

    while(j>=0)
    {
        int indx = p.order_of_key({rev[j], n+1});
        auto it = p.find_by_order(indx-1);
        // cout <<it->first<<" "<<it->second<<" nl ";

        int tmpx = icnt.order_of_key(n) - icnt.order_of_key(it->second);

        int tmp = n - it->second - tmpx-1; 
        // cout << tmp<<nl;
        sum+= tmp  ;
        
        j--;
        icnt.insert(it->second);
        p.erase(it);
    }
    cout << sum<<nl;

}