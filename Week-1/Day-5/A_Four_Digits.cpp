#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int t = 4- str.size();
    
    while(t--) str = '0'+str;
    
    cout << str << endl;
    
}