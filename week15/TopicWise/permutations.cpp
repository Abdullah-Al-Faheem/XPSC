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

int n;
vector<int> ans;
map<int,int> mp;

void perm(vector<int> arr)
{
    if(ans.size()==n) 
    {
        output(ans);
        return;
    }
    for (int i =0; i<n; i++)
    {
        int it = arr[i];
        if(mp[it] == 0)
        {
            mp[it] = 1;
            ans.push_back(it);
            perm(arr);
            mp[it] =0;
            ans.pop_back();
        }
    }
}

int32_t main()
{
    fast_io;
     cin >> n;
    vector<int> arr(n);
    input(arr);

    perm(arr);


}