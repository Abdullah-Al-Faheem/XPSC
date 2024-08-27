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
        vector<int> arr(n), tmp(n);
        input(arr);
        // output(arr);

        int sum = 0;

        int tt = 2;
        while(tt--)
        {
            int mx = 0; 
            set<int> st;
            for (int i =0; i<n; i++)
            {
                sum+= arr[i];
                if(!st.empty() and st.count(arr[i]))
                {
                    mx = max(mx , arr[i]);
                }
                st.insert(arr[i]);
                tmp[i] = mx;
            }
            arr = tmp;
            // output(arr);
        }

        // cout << sum<<nl;

        map<int,int> mp;
        for (int i =0; i<n; i++)
        {
            if(arr[i] != 0) mp[arr[i]]++;
        }

        vector<pair<int,int> > vp;
        for (auto it: mp)
        {
            // cout << it.first<<" "<<it.second<<nl;
            vp.push_back({it.first, it.second}); // ??
        }

        int carr = 0;
        while(!vp.empty())
        {
            int a, b;
            a = vp.back().first;
            b = vp.back().second;
            vp.pop_back();
            
            sum += carr * a* b;
            // cout << "carr "<< carr*a<<nl;

            sum += ((b* (b+1))/2)*a;

            // cout << "main "<< ((b* (b+1))/2)*a<<nl;

            carr+= b;
        }

        cout << sum<<nl;


            
    }
}