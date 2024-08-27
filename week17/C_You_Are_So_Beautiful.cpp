#include<bits/stdc++.h>
using namespace std;
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

int32_t main()
{
    fast_io;
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<int> arr(n), suff(n+2, 0);
        input(arr);

        map<int,int> mp1, mp2;

        int cnt = 0, total =0;

        for (int i =n-1; i>= 0; i--)
        {
            if(mp2[arr[i]] == 0)
            {
                mp2[arr[i]] = 1;
                cnt++;
            }
            suff[i] = cnt;
        } 

        // for (int i =0; i<n; i++)
        // {
        //     cout << suff[i]<<" ";
        // }      cout <<nl;

        for (int i =0; i<n; i++)
        {
            if(mp1[arr[i]] == 0)
            {
                mp1[arr[i]] = 1;
                total += suff[i];
            }
        }
        cout << total<<nl;
    }
}