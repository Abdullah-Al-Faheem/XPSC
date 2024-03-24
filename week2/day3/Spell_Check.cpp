#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    string tt ="Timur";
    sort(tt.begin(), tt.end());

    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >>n;
        string str;
        cin >> str;
        sort(str.begin(),str.end());
        if(str==tt)cout <<"YES"<<nl;
        else cout <<"NO"<<nl;
    }
}