#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> res;
    for(int i=0; i<t; i++)
    {
        int a[3][2];
        for(int j=0; j<3; j++)
            for(int k=0; k<2; k++)
                cin>>a[j][k];
        //arr[0] capacity, arr[1] number of s and w, arr[2] weight of s and w
        int item=a[1][0]+a[1][1];
        int w=0;
        while(w<=a[0][0]+a[0][1])
        {

        }
    }

    return 0;
}
