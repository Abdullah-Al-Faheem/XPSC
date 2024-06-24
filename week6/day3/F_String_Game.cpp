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
    string t, p;

    cin >> t>> p;

    int sz  = t.size();

    vector<int> arr(sz);

    for (int i =0; i<sz; i++) cin >> arr[i];

    // string tmp = t;

    // for (int i =0; i<sz; i++) 
    // {
    //     tmp[arr[i]-1] = '*';
    // }
    // // cout << tmp<<nl;

    // int cnt = 0;
    // while(!arr.empty())
    // {
    //     int indx = arr.back()-1; arr.pop_back();
    //     tmp[indx] = t[indx];
    //     cnt++;

    //     string chk = p;
    //     for (int i =sz-1; i>= 0; i--)
    //     {
    //         if(!chk.empty() and tmp[i] == chk.back()) chk.pop_back();
    //     }

    //     if(chk.empty())
    //     {
    //         break;
    //     }
    // }

    // cout << sz- cnt<<nl;

    int strt, end , mid;
    strt = 0; end = sz;

    int ans = 0;
    while(strt <= end)
    {
        mid = (strt+end)/2;

        string tmp = t;

        for (int i =0; i<mid; i++) 
        {
            tmp[arr[i]-1] = '*';
        }
        string chk = p;
        for (int i =sz-1; i>= 0; i--)
        {
            if(!chk.empty() and tmp[i] == chk.back()) chk.pop_back();
        }

        if(chk.empty())
        {
            ans = max(ans, mid);
            strt = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    cout << ans<<nl;
}



