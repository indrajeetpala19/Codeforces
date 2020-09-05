#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt=0, mx=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<=a[i+1])
            cnt++;
        else cnt=0;
        mx=max(mx,cnt);
    }
    cout<<mx+1<<endl;
    return 0;
}
