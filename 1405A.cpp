#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
            cin>>arr[j];
        for(int j=n-1; j>=0; j--)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    return 0;
}
