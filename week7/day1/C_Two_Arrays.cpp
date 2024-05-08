#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define endl "\n"
#define nl "\n"
#define int long long
#define ll long long
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main()
{
    fast_io;
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<ll> arr(n);
        multiset<ll> st;
        ll tmp;

        for (int i =0; i<n; i++) cin >> arr[i];
        for (int i =0; i<n; i++)
        {
            cin >> tmp;
            st.insert(tmp);
        }
        sort(all(arr));

        for (int i =0; i<n; i++)
        {
                auto f = st.find(arr[i]);
                auto f2 = st.find(arr[i]+1);
                if(f != st.end())
                {
                    st.erase(f);
                }
                else if(f2 != st.end())
                {
                    st.erase(f2);
                }
            
        }

        if(st.empty()) YES;
        else NO;

    }   
}