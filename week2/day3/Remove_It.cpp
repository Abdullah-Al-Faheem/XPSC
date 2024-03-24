#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    int n, p;
    cin >> n>> p;
    int tmp;
    for(int i = 0; i<n; i++)
    {
        cin >> tmp;
        if(tmp!= p) cout <<tmp<<" ";
    }

    cout <<nl;
}