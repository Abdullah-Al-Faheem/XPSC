#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define nl "\n"
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
#define sqrt(x) sqrtl(x)
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define input(arr) for(auto &it: arr) cin>>it
#define output(arr) for(auto &it: arr) cout<<it<<" "; cout<<nl
#define vec2d(name,n,m,val) vector<vector<int>>(name)((n),vector<int>((m),(val)))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool isPalindrome(vector<int> arr)
{
    vector<int> tmp = arr;
    reverse(all(tmp));
    return (tmp==arr);
}

int32_t main()
{
    fast_io;
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        input(arr);
        
        if(isPalindrome(arr)) {YES; continue;}

        int a, b;

        vector<int> tmp = arr;
        reverse(all(tmp));
        for (int i =0; i<n; i++)
        {
            if(arr[i] != tmp[i])
            {
                a = arr[i]; b= tmp[i];
                break;
            }
        }

        // cout << a<<" "<<b<<nl;

        vector<int> nw1, nw2;

        for (int i =0; i<n; i++)
        {
            if(arr[i] == a) continue;
            nw1.push_back(arr[i]);
        }
        for (int i =0; i<n; i++)
        {
            if(arr[i] == b) continue;
            nw2.push_back(arr[i]);
        }
        // output(nw1);
        // output(nw2);

        if(isPalindrome(nw1) or isPalindrome(nw2)) YES;
        else NO;


    }
}