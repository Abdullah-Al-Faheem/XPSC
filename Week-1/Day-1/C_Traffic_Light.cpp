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
        int n; char ch; 
        cin >>n >> ch;

        string str;
        cin >> str;

        str = str+ str;

        int flag = 0;

        int cnt = 0;
        int ans = 0;

        for (int i=0; i<str.size(); i++)
        {
            if(flag == 0 and str[i] == ch) flag = 1;

            if(flag and str[i] == 'g')
            {
                ans = max(ans, cnt);
                flag = 0;
                cnt = 0;
            }

            if (flag) cnt++;
        }

        cout << ans<< nl;
    }   
}