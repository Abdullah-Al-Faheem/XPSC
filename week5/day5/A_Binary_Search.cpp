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
    int n, tc;
    cin >> n>> tc;
    vector<ll> arr(n);
    for (int i =0; i<n; i++)  cin >> arr[i] ;

    // for (int i =0; i<n; i++) cout << arr[i]<<" "; cout <<nl;

    while(tc--)
    {
        ll x; cin  >> x; 
        // cout << x<<nl;

        int l, r, mid;
        l  = 0; r = n-1;

        bool found = false;
        while(l<=r)
        {   
            // cout << l<<" "<<r<<" "<<mid<<" "<<x<<" "<<arr[mid]<<nl;
            mid = (l+r)/2;
            if (arr[mid] == x) 
            {
                found = true;
                break;
            }
            else if (arr[mid] > x) r = mid-1;
            else l = mid +1; 
        }

        if (found) YES;
        else NO;
    }   
}