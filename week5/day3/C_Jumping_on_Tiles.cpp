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

    map<char, int> mp;

    char ch = 'a';
    for (int i =1; i<=26; i++)
    {
        mp[ch] = i;
        ch++;
    }

    // for (auto it: mp) cout << it.first<<" "<< it.second<<nl;

    int tc; cin >> tc;
    while(tc--)
    {
        string str;
        cin >> str;

        bool aBig = false;
        int a,b;
        a = mp[str.front()];
        b = mp[str.back()];

        if (a>b) aBig = true;
        // cout << a<<" "<< b<<nl; 


        vector<pair<int, int> > arr;
        int tmp;
        for (int i =1; i<str.size()-1; i++)
        {
            tmp = mp[str[i]];

            if (aBig)
            {
                if (tmp <= a and tmp >= b) arr.push_back({tmp, i+1});
                
            }
            else // b big
            {
                if(tmp >= a and tmp <= b) arr.push_back({tmp, i+1});
            }

        } 

        if (aBig) sort(rall(arr)); 
        else sort(all(arr));


        cout << abs(a-b)<<" "<< arr.size()+2<<nl;
        cout <<1<<" ";
        for (auto it: arr)
        {
            cout << it.second<<" ";
        }   
        cout<< str.size() <<nl;  
    }   
}