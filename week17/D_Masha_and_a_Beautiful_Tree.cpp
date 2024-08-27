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

const int N = 1e7+3;
vector<int> num(N), temp(N);

//call merge_sort(low, high) to sort in range low->high
int merge_sort(int lo, int hi)
{
    if(lo == hi) return 0;
    int mid = (lo+hi)/2;

    int ans, ans1, ans2;
    ans1 = merge_sort(lo, mid);
    ans2 = merge_sort(mid+1, hi);
    ans = ans1+ans2;

    if(num[lo] < num[mid+1])
    {
        int k = lo;
        for (int i =lo; i<=mid; i++)
        {
            temp[k++] = num[i];
        }
        for (int i =mid+1; i<=hi; i++)
        {
            temp[k++] = num[i];
        }
    }
    else
    {
        ans++;

        int k = lo;
        for (int i =mid+1; i<=hi; i++)
        {
            temp[k++] = num[i];
        }
        for (int i =lo; i<=mid; i++)
        {
            temp[k++] = num[i];
        }
    }

    for (int k = lo ; k<= hi; k++) num[k] = temp[k]; 

    return ans;
}

int32_t main()
{
    fast_io;
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        input(arr); 
        num = arr;
        sort(all(arr));  
        int ans = merge_sort(0,n-1);



        bool flag =true;
        for (int i =0; i<n; i++)
        {
            if(num[i] != arr[i])
            {
                flag = false;
                break;
            }
        } 
        if(flag)
        {
            cout << ans<<nl;
        }
        else cout << -1<<nl;
    }
}