#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>> n>> m;
    
    multiset<int> st;
    int tmp;
    for(int i=0; i<n+m; i++) 
    {
        cin >> tmp;
        st.insert(tmp);
    }
    
    for(int it: st) cout <<it<<" ";
    cout << endl;
    

    return 0;
}