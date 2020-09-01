#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int j=0; j<n; j++)
        cin>>arr[j];

    sort(arr, arr+n);

    long long int cost=arr[0]-1;

    for(int p=1; p<n-1; p++)
    {
        long long int res=arr[p]/2;

        while( pow(arr[p]-res,1/p)!=pow(arr[p+1]+res,1/(p+1)))
            res++;

        cost+=res;
    }

     cout<<cost<<endl;
    return 0;
}
