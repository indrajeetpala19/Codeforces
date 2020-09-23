#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, int k, int l)
{
    if(k*l<n)
        return {-1};
    vector<int> res(n,0);
    int cnt=1;
    int arr[k]={l}; // array of bowlers with max l overs each
    for(int i=0; i<n; i++)
    {
        if(arr[cnt-1]==0)cnt++;
        res[i]=cnt;
        cnt++;
        arr[cnt-1]--;
        if(cnt==k+1) cnt=1;
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, l;
        cin>>n>>k>>l;
        vector<int> ans=solve(n,k,l);
        for(auto x: ans)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}
