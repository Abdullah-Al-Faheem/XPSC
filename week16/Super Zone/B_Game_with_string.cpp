#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define nl "\n"
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
#define sqrt(x) sqrtl(x)
#define NO cout<<"No"<<endl
#define YES cout<<"Yes"<<endl
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
    string str;
    cin >> str;
    vector<int> arr;

    int cnt =0;
    for (int i =0; i<str.size(); i++)
    {
        if(!arr.empty() and arr.back()==str[i])
        {
            arr.pop_back();
            cnt++;
        }
        else
        {
            arr.push_back(str[i]);
        }
    }
    if(cnt%2)YES;
    else NO;
}