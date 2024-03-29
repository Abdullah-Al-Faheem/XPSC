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
        ll n, s;
        cin >> n>> s;

        vector<ll> arr(n);
        for (int i = 0; i<n; i++) cin >> arr[i];

        int i = 0, j= 0;
        ll curSum = 0;
        int len = 0;



        while(j<n and i<n)
        {
            curSum += arr[j];

            if(curSum > s)
            {
                while(curSum > s)
                {
                    curSum -= arr[i];
                    i++;
                }
                j++;
            }
            else if (curSum <= s)
            {
                len = max (len, (j-i+1));

                j++;
            }

        }


        cout << len<<nl;

}
