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
    int n, k;
    cin >> n>> k;

    vector<int> arr;
        for (int i = 1; i*i <= n; i++)
        {
            if(n%i == 0) 
            {
                arr.push_back(i);
                if (n/i != i) arr.push_back(n/i);
            }
        }
        sort(all(arr));

        if(arr.size() < k) cout << -1<<nl;
        else cout << arr[k-1]<<nl;
}