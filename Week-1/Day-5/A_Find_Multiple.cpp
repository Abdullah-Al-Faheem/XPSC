#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a>> b>> c; 
    
    int flag = 0;
    
    while (c <= b)
    {
        if (c >= a and c<= b)
        {
            flag = 1;
            break;
        }
        c+= c;
    } 
    
    if (flag) cout << c << endl;  
    else cout << -1 << endl;
}