#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define endl "\n"
#define nl "\n"
#define ll long long
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast_io;
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;

        map<int,int> mp;

        int x;
        for (int i =0; i<n; i++)
        {
            cin >> x;
            mp[x]++;
        }   

        int i = -1, prev;

        int ans=0 ;
        for (auto it: mp)
        {
            if (i != it.first)
            {
                i = it.first;
                prev = 0;
            }

            ans += max(0, it.second-prev);
            i++;
            prev = it.second;
        }  

        cout << ans<<nl; 
    }   
}