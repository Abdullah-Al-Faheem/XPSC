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
    int tc; cin >> tc;
    vector<int> arr(n);
    input(arr);
    
    int l, r;
    vector<int> diffArr(n,0);
    while(tc--)
    {
        cin >> l>> r;
        diffArr[l-1]+=1;
        if(r!=n) diffArr[r] -= 1;
    }
    int tmp = 0;
    priority_queue<int>pq;
    for (int i =0; i<n; i++)
    {
        tmp+= diffArr[i];
        // cout<< tmp<<" ";
        pq.push(tmp);

    }
    ll sum = 0;
    sort(all(arr));
    // output(arr);
    while(!pq.empty())
    {
        // cout << pq.top()<<" ";
        sum+= pq.top() * arr.back();
        arr.pop_back();
        pq.pop();
    }
    cout << sum <<nl;
}   