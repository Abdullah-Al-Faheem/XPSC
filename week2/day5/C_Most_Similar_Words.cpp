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
        int n, m;
        cin >>n>> m;

        vector<string> arr(n);
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int ans = INT_MAX;
        for (int k=0; k<n; k++)
        {
            string str = arr[k];

            for (int i=k+1; i<n; i++)
            {
                string tmp = arr[i];
                int cnt = 0;
                for (int j=0; j<m; j++)
                {
                    cnt+= abs(str[j]-tmp[j]);
                }
                ans = min(cnt, ans);
            }

        }

        cout<< ans<<nl;
    }   
}