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

const int N = 1e5+3;
map<int,int>status;

vector<int> arr[N];
set<int> st;

int fun(int root)
{
    // cout << root<<nl;

    int temp = 0;

    for (auto it: arr[root])
    {
        temp+= fun(it);
    }   

    temp+= status[root];

    if(temp== 0) 
    {
        // cout << root<<nl;
        st.insert(root);
    }

    return status[root];
}


int32_t main()
{
    fast_io;
    int n; cin >> n;

    int main ;

    int parent, respect;
    for (int i =1; i<=n; i++)
    {
        cin >> parent >> respect;

        if(parent == -1) main = i;

        arr[parent].push_back(i);
        status[i] = 1- respect;
    }
    fun(main);

    st.erase(main);

    if(st.empty()) cout <<-1<<nl;
    for (auto it: st) 
    {
        cout << it<<" ";
    }cout << nl;


}