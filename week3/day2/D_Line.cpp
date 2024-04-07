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
    while(tc--)
    {
        int n; cin >> n;
        string str; 
        cin >> str;

        vector<ll> vec;

        ll curr, sum = 0, sz = str.size(), lft, rgt, mx;

        for (int i =0; i<n; i++)
        {
            lft = i; rgt = str.size() - (i+1);

            if (str[i] == 'L') curr = lft;
            else curr = rgt;

            sum+= curr;
            mx = max(lft, rgt);

            vec.push_back(mx-curr);
        }   

        sort (rall(vec));

        for (ll it: vec)
        {
            sum += it;
            cout << sum<<" ";
        }   
        cout <<nl;
    }   
}