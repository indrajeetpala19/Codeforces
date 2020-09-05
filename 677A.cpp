#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;
    int cnt=n;
    while(n--)
    {
        int a;
        cin>>a;
        if(a>h)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
