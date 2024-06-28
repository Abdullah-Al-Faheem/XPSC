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
    int n, k, q;
    cin >> n>> k>>q;
    int N = 2e5+3;
    vector<int> diffArr(N,0);

    int a, b;
    while(n--)
    {
        cin >> a>> b;
        diffArr[a]+=1;
        diffArr[b+1]-=1;
    }
    

    int tmp = 0;

    vector<int> ans(N,0);
    for (int i =0; i<N; i++)
    {
        tmp+=diffArr[i];

        // if(i>= 90 and i<100 )cout <<i<<"->"<<tmp<<nl;

        if(tmp>=k) ans[i]= 1;
    }
    cout <<nl;

    vector<int>preSum;
    int total =0;
    for (int i =0; i<N; i++)
    {
        preSum.push_back(total);
        total+= ans[i];
    }


    // for (int i =90; i<100; i++)
    // {
    //     cout << i<<"->"<< preSum[i]<<nl;
    // }


    while(q--)
    {
        cin >> a>> b;
        cout<< preSum[b+1]- preSum[a]<<nl;
    }
    

    

}