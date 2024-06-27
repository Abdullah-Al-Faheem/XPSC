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
    int n, k;
    cin >> n>>k;
    vector<int> arr(n);
    
    input(arr);
    
    

    int l, r, ans, mx, mn ;
    l = r= ans= 0;
    multiset<int> st;

    while(r<n)
    {
        st.insert(arr[r]);
        mx = *(--st.end());
        mn = *st.begin();

        while(mx-mn > k)
        {
            st.erase(st.find(arr[l])); l++;

            mx = *(--st.end());
            mn = *st.begin();
        }

        if(mx-mn <= k)
        {
            ans+= r-l+1;
        }
        r++;
    }


    cout << ans<<nl;
    
}