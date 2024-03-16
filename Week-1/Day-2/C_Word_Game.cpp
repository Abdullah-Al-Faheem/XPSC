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
        unordered_set<string> a, b, c, tmp;
        
        string str;
        for (int i=0; i<n; i++) 
        {
            cin >> str;
            a.insert(str);
            tmp.insert(str);
        }
        for (int i=0; i<n; i++) 
        {
            cin >> str;
            b.insert(str);
            tmp.insert(str);
        }
        for (int i=0; i<n; i++) 
        {
            cin >> str;
            c.insert(str);
            tmp.insert(str);
        }

        int x, y, z;
        x = y = z = 0;
        for (string it: tmp)    
        {
            if (a.count(it))
            {
                if (b.count(it))
                {
                    if (!c.count(it))
                    {
                        x+= 1;
                        y+= 1;
                    }
                }
                else if(c.count(it))
                {
                    if(!b.count(it))
                    {
                        x+= 1;
                        z+= 1;
                    }
                }
                else x+= 3;
            }
            else if(b.count(it))
            {
                if(c.count(it))
                {
                    y+= 1;
                    z+= 1;
                }
                else y+= 3;
            }
            else if (c.count(it)) z+= 3;
        }

        cout << x<<" "<< y<<" "<< z<<nl;
    }   
}