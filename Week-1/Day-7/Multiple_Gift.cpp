#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int main() 
{
    ll a, b;
    cin >> a>> b;
    
    int cnt = 0;
    while(a<=b)
    {
        cnt++;
        a +=  a;
    }
    
    cout << cnt<<nl;
}