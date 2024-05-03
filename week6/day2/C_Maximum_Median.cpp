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
    ll n, k;
    cin >> n>> k;
    vector<ll> arr(n);
    for (int i =0; i<n; i++) cin >> arr[i];  
    sort(all(arr));
    // for (int i =0; i<n; i++) cout << arr[i]<<" "; cout <<nl;
    

    ll cnt = 0, med = arr[n/2], diff, tmp, op;
    // cout << "med = "<< med<<nl;

    for (int i =n/2; i<n; i++)
    {
        cnt++;

        if (i == n-1) diff = 0;
        else diff = arr[i+1]-arr[i];
        
        // op = diff * cnt;

        if (k < cnt) break;

        
        if ( i == n-1) tmp = k/cnt;
        else tmp = min(diff, k/cnt);
        
        op = tmp * cnt;

        // cout << "//"<<"diff ->"<< diff<<" "<< "  tmp->"<< tmp<<nl;
        k -= op;
        med += tmp;
    } 

    cout << med<<nl;
}