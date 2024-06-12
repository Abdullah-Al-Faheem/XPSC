#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define endl "\n"
#define nl "\n"
#define int long long
#define ll long long
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define sqrt(x) sqrtl(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool isPrime(int n)
{
    if (n<= 1) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0) return false;
    }
    
    return true;
}

int32_t main()
{
    fast_io;
    int n; cin >> n;

    int ans;
    if(n==2) ans = 1;
    else if(n%2)
    {
        if(isPrime(n)) ans = 1;
        else if( isPrime(n-2) ) ans = 2;
        else ans = 3;
    }
    else ans = 2;

    cout << ans<<nl;
}   