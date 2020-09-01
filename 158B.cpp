#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x;
    cin>>n;
    int cnt[5]={0};

    while(n--)
    {
       cin>>x;
       cnt[x]++;
    }

    int total= cnt[4]+cnt[3]+ cnt[2]/2;

    cnt[1]-=cnt[3];

    if(cnt[2]%2==1)
    {
        total+=1;
        cnt[1]-=2;
    }
    if(cnt[1]>0)
        total+=(cnt[1] + 3)/4;

    cout<<total<<endl;

    return 0;
}
