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
        ll n, total;
        cin >> n>> total;

        ll left, mid, right; ll tmp = LLONG_MAX;
        vector<ll> arr(n);

        for (int i =0; i<n; i++) 
        {
            cin >> arr[i];
            tmp = min(tmp, arr[i]);
        }
        
        left = 0; right = tmp*total;

        ll sum, ans=-1;
        // cout << left<<" "<< right<<nl;

        while(left<=right)
        {
            mid = (left+right+1)/2;
            // cout<<left<<" "<< mid << " "<< right <<nl;
            sum = 0;
            for (int i =0; i<n; i++)
            {
                sum += (mid/arr[i]);
            }
            // cout << "sum -> "<<sum<<nl<<nl;

            if (sum < total) left = mid+1;
            else if( sum >= total) 
            {
                ans = mid;
                right = mid-1;
            }
        }

        cout << ans<<nl;
}