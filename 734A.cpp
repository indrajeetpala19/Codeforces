#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int A=0, D=0, n;
    cin>>n>>s;

    for(const char& c : s)
    {
        if(c=='A') A++;
        else D++;
    }

    if(A>D)
        cout<<"Anton";
    else if(D>A)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
