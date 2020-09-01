#include <bits/stdc++.h>
using namespace std;

string ispal( int pall[4], int odd)
{
    if(odd<=1)
        return "Yes";

    if (pall[0]==0 || pall[1]==0 || pall[2]==0)
        return "No";
    else
        {
            for(int i=0; i<3; i++)
            {
                pall[i]-=1;
                pall[3]+=1;
                if(pall[i]%2==0)
                    odd--;
            }
            ispal(pall, odd);
        }
}
int main()
{
    int t;  // t test cases
    cin>>t;
    int pall[4];
    vector<string> res;
    for (int i=0; i<t; i++)
    {
        int odd=0;
        for (int j=0; j<4; j++)  // vector initialization
        {
            cin>>pall[j];
            if (pall[j]%2==1) odd++;
        }
        res.push_back(ispal(pall, odd));
    }
        for (int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<endl;
    }
    return 0;
}
