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
        int a, b, c;
        cin >> a>> b>> c;

        if(a+b == c) cout <<"+"<<nl;
        else cout <<"-"<<nl;
    }
}