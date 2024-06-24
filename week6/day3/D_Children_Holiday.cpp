#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
#define input(arr) for(auto &it: arr) cin>>it
#define output(arr) for(auto &it: arr) cout<<it<<" "; cout<<nl
#define vec2d(name,n,m,val) vector<vector<int>>(name)((n),vector<int>((m),(val)))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main()
{
    fast_io;
    int m, n;
    cin >> m>> n;
    vector<vector<int> > arr(n,vector<int>(3,0));

    for (int i =0; i<n; i++)
    {
        for (int j =0; j<3; j++) cin >> arr[i][j];
    }
    int lft = 0, rgt = (ll)1e8, mid, sum = 0, ans; 
    
    vector<int> cnt(n,0);
    vector<int> ansvec;

    if(m== 0)
    {
        cout << 0<<nl;
        output(cnt);
        return 0;
    }
    

    while(lft<=rgt)
    {
        mid = lft +(rgt-lft)/2;
        int has = m;
        
        for (int i =0; i<n; i++)
        {
            int t, z, y;
            t = arr[i][0];
            z = arr[i][1];
            y = arr[i][2];

            int temp = (t*z) + y;
            int qsnt = mid/ ( temp );

            cnt[i] = qsnt*z;
            int rem = mid%temp;
            cnt[i] += min(z, rem/t );
            cnt[i] = min(has, cnt[i]);
            has -= cnt[i];
        }

        if(has==0)
        {
            ans = mid;
            ansvec = cnt;
              
            rgt = mid-1;  
        }
        else 
        {
            lft = mid+1;
        }
    }
    cout << ans<<nl;
    output(ansvec);   
    
}

