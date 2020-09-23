#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int p=0; p<t; p++)
    {
        int n, zero=0, one=0, sum=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a==0) zero++;
            else one++;
        }
        int x=n/2;
        cout<<x<<endl;
        if(x==1)
        {
            if(one==2)cout<<1<<" "<<1<<endl;
            else cout<<0<<endl;
        }
        else if(x==2)
        {
            if(one>=2)cout<<1<<" "<<1<<endl;
            else cout<<0<<" "<<0<<endl;
        }
        else
        {
            if(one>=x)
            {
                while(x>0)
                {
                    cout<<1<<" ";
                    x--;
                }
                cout<<endl;
            }
            else
            {
                while(x>0)
                {
                    cout<<0<<" ";
                    x--;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
