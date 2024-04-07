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
        int n; cin >> n;
        unordered_set<string> st;

        vector<string> str(n);
        for (int i =0; i<n; i++)
        {
            cin >> str[i];
            st.insert(str[i]);
        }

        
        for (int i =0; i<n; i++)
        {
            bool ans = false;
            for (int j = 1; j<str[i].size(); j++)
            {
                string aa, bb;
                aa = str[i].substr(0,j);
                bb = str[i].substr(j, str[i].size());
                if (st.count(aa) and st.count(bb))
                {
                    ans = true;
                    break;
                }
            }
            cout << ans;
        }
        cout << nl;
        
    }   
}