#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>m;
        a[m]=i;
    }
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";

    return 0;
}
