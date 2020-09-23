#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t], cnt=0;
    for(int i=0; i<t; i++)
        cin>>a[i];
    for(int i=1; i<t; i++)
        if(a[i]%10!=a[i-1]%10)
            cnt++;
    cout<<cnt+1<<endl;
    return 0;
}
