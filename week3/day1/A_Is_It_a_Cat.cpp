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
    while (tc--)
    {
        int n; cin >>n;
        string str;
        cin >> str;

        string tt;
        if (str[0] == 'm' or  str[0]=='M') tt = 'm';
        else 
        {
            NO;
            continue;
        }

        for (int i=1; i<n; i++)
        {
            if (str[i] == 'M') str[i] = 'm';
            else if (str[i] == 'E') str[i] = 'e';
            else if (str[i] == 'O') str[i] = 'o';
            else if(str[i] == 'W') str[i] = 'w';

            if (str[i] != tt.back()) tt+= str[i];

        }
        if (tt == "meow")YES;
        else NO;
    }

}