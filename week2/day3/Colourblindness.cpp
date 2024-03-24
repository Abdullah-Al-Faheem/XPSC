#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        string a, b;
        char ch;
        for (int i = 0; i<n; i++)
        {
            cin >>ch;
            if(ch == 'G') ch = 'B';
            a+= ch;
        }
        for (int i = 0; i<n; i++)
        {
            cin >>ch;
            if(ch == 'G') ch = 'B';
            b+= ch;
        }

        if(a==b) cout <<"YES"<<nl;
        else cout <<"NO"<<nl;
    }
}