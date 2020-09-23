#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,k, op=0;
        cin>>x>>y>>k;
        op= k + (((y+1)*k)-1)/(x-1);
        if((((y+1)*k)-1)%(x-1)!=0) op++;
        cout<<op<<endl;
    }
	return 0;
}
