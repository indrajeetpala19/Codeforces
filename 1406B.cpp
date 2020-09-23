#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,l = 0, r = 0, cnt=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr, arr+n);
        int res = arr[0];
        while(cnt<5)
        {
            for (int i = 0; i < n; i++) {
                l =  (l ? l : 1) * arr[i];
                r =  (r ? r : 1) * arr[n - 1 - i];
                res = max(res, max(l, r));
                cnt++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
