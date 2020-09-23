#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, k=0;
        cin>>n;
        long long sum=0;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        std::sort(arr,arr+n);
        for(int i=n-1; i>=0 && arr[i]>0; i--)
        {
            sum+=arr[i];
            k++;
        }
        cout<<sum<<endl;
        cout<<k<<" ";
        for(int i=n-1; i>=0 && arr[i]>0; i--)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
