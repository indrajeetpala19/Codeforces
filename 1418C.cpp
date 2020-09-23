#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, res=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n;)
        {
            if(a[i]==0)
            {
                if(a[i+1]==1)
                {
                    i+=3;
                }
                else i+=4;
            }
            else
            {
                if(a[i+1]==1)
                {
                    res++;
                    i+=3;
                }
                else
                {
                    i+=4;
                    res++;
                }
            }
        }
        if(n==1) cout<<a[0]<<endl;
        else cout<<res<<endl;
    }
	return 0;
}
