#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin>>x;
    int a[x];
    double sum=0;
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    cout<<double(sum/x)<<endl;
    return 0;
}
