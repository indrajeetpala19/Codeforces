#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr, arr+n);
        int res = max(arr[0] * arr[1] * arr[2]* arr[3] * arr[n - 1], arr[n - 1] * arr[n - 2] * arr[n - 3]*arr[n-4]*arr[n-5]);
        cout<<res<<endl;
    }
    return 0;
}
