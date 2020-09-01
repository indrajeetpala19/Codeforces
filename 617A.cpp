#include <bits/stdc++.h>
using namespace std;

int main() {

    int k, moves=0;
    cin>>k;

    while(k>0)
    {
       if(k>=5)
       {
           k-=5;
           moves++;
       }
       else if(k<5 && k>=4)
       {
           k-=4;
           moves++;
       }
       else if(k<4 && k>=3)
       {
           k-=3;
           moves++;
       }
       else if(k<3 && k>=2)
       {
           k-=2;
           moves++;
       }
       else
       {
           k-=1;
           moves++;
       }
    }
    cout<<moves;
    return 0;
}
