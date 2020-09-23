#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int n;
        cin>>n;
       /* if(n==1)
        {
            int a;
            cin>>a;
            cout<<abs(a)<<endl;
        }*/

        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
       long long int cnt=0;
       for(int i=0; i<n-1; i++)
       {
           if(arr[i]>0)
           {
               for(int j=i+1; j<n; j++)
               {
                   if(arr[j]<0)
                   {
                       if(abs(arr[i])>abs(arr[j]))
                       {
                           arr[i]-=abs(arr[j]);
                           arr[j]=0;
                       }
                       else if(abs(arr[i])<abs(arr[j]))
                       {
                           arr[j]+=abs(arr[i]);
                           arr[i]=0;
                       }
                       else
                       {
                           arr[j]=0;
                           arr[i]=0;
                       }
                   }
               }
           }
       }
       for(int i=0; i<n; i++)
            cnt+= abs(arr[i]);
       cout<<cnt/2<<endl;
    }
    return 0;
}
