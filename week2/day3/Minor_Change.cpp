#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    string a, b;
    int cnt = 0;
    cin >> a>>b;
    for (int  i = 0; i<a.size(); i++)
    {
        if (a[i]!=b[i]) cnt++;
    }
    cout << cnt<<nl;
}