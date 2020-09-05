#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,cnt=0;
    cin>>t;
    int a[t][2];
    while(t--)
    {
        cin>>a[t][0]>>a[t][1];
        if(a[t][1]-a[t][0]>=2)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
