// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string str;
    cin >> str;
    set<char> st;
    for (int i = 0; i<str.size(); i++)
    {
        st.insert(str[i]);
    }
    
    for (char ch = 'a'; ch<= 'z'; ch++)
    {
        if(st.count(ch) == 0)
        {
            cout << ch<< endl;
            return 0;
        }
    }
    cout <<"None"<< endl;
}