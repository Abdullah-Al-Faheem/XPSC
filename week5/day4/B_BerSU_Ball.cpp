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
    
        int n; cin >> n;
        vector<int> a(n);

        for (int i =0; i<n; i++) cin >> a[i];

        int m; cin >> m;  
        vector<int> b(m);
        for (int i =0; i<m; i++) cin >> b[i];


        sort(rall(a)); sort(rall(b));

        // for (int i =0; i<n; i++) cout << a[i]<<" "; cout<<nl;

        // for (int i =0; i<m; i++) cout << b[i]<<" "; cout <<nl;

        int cnt = 0;
        while( !a.empty() and !b.empty())
        {
            int dif = abs(a.back() - b.back());

            if (dif <= 1)
            {
                cnt ++;
                a.pop_back();
                b.pop_back();
            }
            else if (a.back() < b.back()) a.pop_back();
            else b.pop_back();
        }     

        cout << cnt<< nl;
}