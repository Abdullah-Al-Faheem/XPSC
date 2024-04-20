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
    while(tc--)
    {
        string str;
        cin >> str;

        map<char, int> mp;  

        for (int i =0; i<str.size(); i++)
        {
            mp[str[i]]++;
        }  

        if (mp.size() == 1) NO;
        else if (mp.size() >= 3) YES;
        else if (mp.size() == 2)
        {
            int flag = 1;
            for (auto it: mp)
            {
                if (it.second == 1)
                {
                    flag = 0;
                    break;
                }
            }

            if  (flag) YES;
            else NO;
        }

    }   
}