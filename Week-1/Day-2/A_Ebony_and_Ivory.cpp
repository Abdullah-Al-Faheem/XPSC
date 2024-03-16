#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define endl "\n"
#define nl "\n"
#define ll long long
#define pb push_back
#define NO cout<<"No"<<endl
#define YES cout<<"Yes"<<endl
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast_io;
    int a, b, c;

    cin >> a>> b>> c;

    if (a>b) swap(a,b);

    int tmp = 0;
    while(tmp <= c)
    {
        if( (c-tmp)%b == 0)
        {
            YES;
            return 0;
        }
        tmp+= a;
    } 
    NO; 
}