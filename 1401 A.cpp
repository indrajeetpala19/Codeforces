#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    vector<int> res;
    for(int i=0; i<t; i++)
    {
        cin >> n >> k;

        if(n < k)
            res.push_back(k-n);

        else if(n % 2 == k % 2)
            res.push_back(0);

        else
            res.push_back(1);
    }

    for(int i=0; i<t; i++)
        cout<<res[i]<<endl;
    return 0;
}
