#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define endl "\n"
#define nl "\n"
#define int long long
#define ll long long
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define fix(n) fixed<<setprecision(n) 
#define mem(a,b) memset(a,b,sizeof(a))
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e7;

unordered_set<int> primes;
void sieve(int n)
{
    n++;
    vector<int> arr(n, 1);
    for (int i = 2; i*i<n; i++)    
    {
        if(arr[i])
        {
            for (int j = i+i; j<n; j+= i) arr[j] = 0;
        }
    }
    for (int i = 2; i<n; i++) if(arr[i]) primes.insert(i);
}

int32_t main()
{
    fast_io; 
    sieve(N);

    int tc, n, tmp; cin >> tc;
    while(tc--)
    {
        cin >>n;
        tmp = sqrt(n);

        if(n==1) NO;
        else if(tmp*tmp == n)
        {
            if(primes.count(tmp)) YES;
            else NO;
        }
        else NO;

    }

}