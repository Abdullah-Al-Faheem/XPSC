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

bool isPallindrome(string str)
{
    string tmp = str;
    reverse(all(tmp));
    return (str==tmp);
}

int x;
vector<string> ans;

void pal(string str, int sz)
{
    if(sz == x) 
    {
        output(ans);
        return;
    }
    string tmp;

    for (int i =0; i<str.size(); i++)
    {
        tmp+= str[i];
        if(isPallindrome(tmp))
        {
            ans.push_back(tmp);
            string rem = str.substr(i+1, str.size());
            pal(rem, sz+i+1);
            ans.pop_back();

        }
    }
}

int32_t main()
{
    fast_io;
    string str;
    cin >> str;
    x = str.size();

    pal(str, 0);
}