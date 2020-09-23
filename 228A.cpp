#include <bits/stdc++.h>
using namespace std;

int solve(int a[])
{
    int cnt=0;
    sort(a,a+4);
    for(int i=1; i<4; i++)
        if(a[i]==a[i-1])
            cnt++;
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    for(int i=0; i<4; i++)
        cin>>arr[i];

    int cnt= solve(arr);
    cout<<cnt<<endl;
    return 0;
}
