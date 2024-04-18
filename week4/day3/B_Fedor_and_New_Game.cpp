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
    int n, m, k;
    cin >> n>> m>> k;

    int x, tmp, cnt, ans = 0;

    vector<int> arr(m);

    for (int i =0; i<m; i++)
    {
        cin >> arr[i];
    }  
    cin >> x; 


    for (int i =0; i<m; i++)
    {
        tmp = (x^arr[i]);
        cnt = 0;

        for (int i =31; i>= 0; i--)
        {
            if (tmp & (1<<i))cnt++;
        }

        if (cnt <= k) ans++;

    }

    cout << ans<<nl;
}