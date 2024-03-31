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
    while (tc--)
    {
        ll n, q, k;

        cin >> n>> q;
        
        vector<ll> arr(n), preSum;
        preSum.push_back(0);
        ll total = 0;

        for (int i=0; i<n; i++) 
        {
            cin >> arr[i];
            total+= arr[i];
            preSum.push_back(total);
        }

        int l, r;
        while(q--)
        {
            cin >> l>> r>> k;

            ll fractionSum = preSum[r]- preSum[l-1];

            ll newTotal = total - fractionSum + (r-l+1)*k;

            if (newTotal%2) YES;
            else NO;

        }
    }   
}