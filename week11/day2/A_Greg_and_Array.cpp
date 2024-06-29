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

int N = 1e5 +3;

int32_t main()
{
    fast_io;
    int n, m , q;
    cin >>n>> m>>q;

    vector<int> arr(n);
    input(arr);

    vector< pair< pair<int,int>, int > > op;
    int l,r, x;
    for (int i =0; i<m; i++)
    {
        cin >> l>>r>> x;
        auto z = make_pair(l,r);
        auto zz = make_pair(z,x);
        op.push_back(zz);
    }

    // sort(all(op));
    
    vector<int>times(N,0);
    while(q--)
    {
        cin >> l>> r;
        times[l]+= 1;
        times[r+1]-= 1;
    }
    for (int i =1; i<N; i++) times[i] += times[i-1];

    vector<int> dArr(n+5,0);

    int temp;
    for (int i =0; i<m; i++)
    {
        auto p = op[i].first;
        int x = op[i].second;
        l = p.first;
        r = p.second;
        //temp = times[p.first]*x; // ??
        temp = times[i+1]*x; // ??

        // cout << p.first<<" "<<p.second<<" "<< temp<<nl;
        dArr[l]+= temp;
        dArr[r+1]-= temp;
    }

    for (int i =1; i<n+5; i++) dArr[i] += dArr[i-1];

    for (int i =0; i<n; i++)
    {
        cout << arr[i]+ dArr[i+1]<<" ";
    }
    cout <<nl;
    






}