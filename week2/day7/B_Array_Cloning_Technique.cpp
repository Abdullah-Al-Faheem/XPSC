#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define endl "\n"


int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;

        map<ll, int> mp;
        ll tmp;

        for (int i =0; i<n; i++)
        {
            cin >> tmp;
            mp[tmp]++;
        }

        int mx = INT_MIN;
        for (auto it: mp)
        {
            mx = max(mx, it.second);
        }
        
        int ans = n-mx;
        int temp = n-mx;
        
        // cout << temp<<nl;
        
        int cnt = 0;
        while(1)
        {
            if(temp <= 0)break;
            temp -= mx;
            mx += mx;
            cnt++;
        }
        cout << ans + cnt<<nl;
    }
}