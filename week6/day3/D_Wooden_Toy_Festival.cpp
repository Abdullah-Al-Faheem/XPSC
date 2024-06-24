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
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        input(arr);

        if(n<=3)    
        {
            cout << 0<<nl;
            continue;
        }

        sort(all(arr));
        // output(arr);
        

        

        int lft = 0, rgt = arr.back(), mid, ans = 0;
        while(lft<=rgt)
        {
            mid = lft + (rgt-lft)/2;

            //greedy part:
            int l, r, cnt;
            l = r= 0;
            cnt = 1;
            while(r<n and l< n)
            {
                if(arr[r]-arr[l] <= 2*mid)
                {
                    r++;
                }
                else
                {
                    // cout << "l->"<<l<<" r->"<<r<<nl;
                    l=r;
                    cnt++;
                }
            } 

            if(cnt <=3)
            {
                // cout << mid<<"-> "<< cnt<<nl;
                ans = mid;
                rgt = mid-1;
            }
            else
            {
                lft = mid+1;
            }
        }

        cout << ans<<nl;

            
    }
}