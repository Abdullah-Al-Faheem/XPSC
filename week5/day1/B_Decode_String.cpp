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

    map <int , char> mp;
    char ch = 'a';

    for (int i =1; i<= 26; i++)
    {
        mp[i] = ch;
        ch++;
    }

    // for (auto it : mp) cout << it.first<<" "<< it.second<<nl;
    int tc; cin >> tc;
    while(tc--)
    {
        string str, ans;
        int n; cin >> n;
        cin  >> str;
        // cout << str<<nl;

        for (int i =n-1; i>= 0; i--)
        {
            if (str[i] == '0')
            {
                i--;
                int tmp = (int)(str[i] - '0');
                i--;
                tmp += 10 * (int)(str[i] - '0');
                // cout << tmp<<nl;
                char c = mp[tmp];
                ans = c + ans;
            }
            else
            {
                
                int tmp = (int)(str[i] - '0');
                // cout << tmp<<nl;
                char c = mp[tmp];
                ans = c + ans;
            }
        }   

        cout << ans<<nl;     
    }

}