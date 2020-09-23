#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    if(a[0]==1 || a[1]==1 || a[2]==1 || a[3]==1)
        return n;
    int res[n]={0}, cnt=n;
    for(int i=0; i<4; i++)
        for(int j=0; j<n; j++)
        {
            if((j+1)%a[i]==0)
                res[j]=1;
        }
    for(auto x : res)
            cnt-=x;
    return n-cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4],d;
    for(int i=0; i<4; i++)
        cin>>arr[i];
    cin>>d;

    int cnt= solve(arr, d);
    cout<<cnt<<endl;
    return 0;
}
