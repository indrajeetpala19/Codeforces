#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>a, int n)
{
    int arr[n]={0};
    for(int i=0; i<2; i++)
        for(auto x: a[i])
            arr[x-1]=1;
    for(auto x: arr)
        if(x==0) return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<vector<int>>a;
    for(int i=0; i<2; i++)
    {
        int p;
        cin>>p;
        vector<int>x;
        while(p--)
        {
            int k;
            cin>>k;
            x.push_back(k);
        }
        a.push_back(x);
    }

    int cnt= solve(a, n);
    if(cnt==1) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
