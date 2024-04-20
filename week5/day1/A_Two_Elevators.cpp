#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--)
    {
        ll a, b, c;
        cin >> a>>b>>c;
        
        ll dif1, dif2;
        
        dif1 = abs(a-1);
        
        dif2 = abs(c-b) + abs(c-1);
        
        if ( dif1< dif2) cout << 1 << endl;
        else if ( dif1 > dif2) cout << 2 << endl; 
        else cout << 3 << endl; 
    }
} 