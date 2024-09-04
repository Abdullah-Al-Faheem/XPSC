#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define nl "\n"
#define int long long
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define sqrt(x) sqrtl(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define input(arr) for(auto &it: arr) cin>>it
#define output(arr) for(auto &it: arr) cout<<it<<" "; cout<<nl
#define vec2d(name,n,m,val) vector<vector<int>>(name)((n),vector<int>((m),(val)))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main()
{
    fast_io;
    int tc; cin >> tc;
    while(tc--)
    {
        string A, B, temp;
        cin >> A>> B;

        bool found = false;

        for (int i =0; i<A.size(); i++)
        {
            string temp1;

            for (int j =i; j<A.size() and (j-i)<B.size(); j++)
            {
                temp1+= A[j];

                string temp2;

                for (int k =j-1; k>= 0 and (temp1.size()+temp2.size()) < B.size(); k--)
                {
                    // cout << temp1.size()<<" "<< temp2.size()<<" "<< B.size()<<nl;
                    temp2+= A[k];
                }

                temp= temp1+temp2;

                // cout << temp1<<" "<<temp2<<" "<< temp<<nl;

                if(temp == B)
                {
                    found = true;
                    break;
                }

            }

            if(found) break;
        }   


        if(found)YES;
        else NO;    
    }
}