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
        vector<int> arr(n);
        for (int i=0; i<n; i++) cin >> arr[i];

        int z, tmp;
        string str;
        for (int i=0; i<n; i++)
        {
            cin >> z >> str;
            for (int j=0; j<z; j++)
            {
                if (str[j] =='D')
                {
                    if( arr[i] == 9) arr[i] = 0;
                    else arr[i]++;
                }
                else if (str[j] =='U')
                {
                    if( arr[i] == 0) arr[i] = 9;
                    else arr[i]--;
                }
            }
        } 

        for (int i=0; i<n; i++) cout<< arr[i]<<" ";
        cout<<nl;  
    }   
}