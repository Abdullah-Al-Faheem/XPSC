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
        vector<int> arr(n);
        input(arr);
        sort(rall(arr));

        if(n%2){NO;continue;}

        vector<int> b(arr.begin(), arr.begin()+n/2), a(arr.begin()+n/2, arr.end()), ans;
        // output(a);
        // output(b);
        // cout <<nl;  

        int tmp = a.back();
        ans.push_back(b.front());
        while(!a.empty())
        {
            ans.push_back(a.back());
            ans.push_back(b.back());
            a.pop_back();
            b.pop_back();
        }
        ans.push_back(tmp);
        // output(ans);

        int flag = true;

        for (int i =1; i<=n; i++)
        {
            if(ans[i]> ans[i-1] and ans[i]> ans[i+1])
            {}
            else if(ans[i]< ans[i-1] and ans[i]< ans[i+1])
            {}
            else
            {
                flag = false;
                // cout << ans[i-1]<<" "<< ans[i]<<" "<<ans[i+1]<<nl;
                break;
            }
        }

        if(flag)
        {
            YES;
            for (int i =1; i<=n; i++)
            {
                cout << ans[i]<<" ";
            }
            cout <<nl;
        }
        else NO;

    }
}