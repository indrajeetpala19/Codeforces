#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
    if(a%b==0) return 0;
    else return b-a%b;
}

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int c= solve(a,b);
        cout<<c<<endl;
    }

    return 0;
}
