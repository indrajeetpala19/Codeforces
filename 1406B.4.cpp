#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int max_product = INT_MIN;

        for (int i = 0; i <n-4; i++)
            for (int j = i + 1; j < n-3; j++)
                for (int k = j + 1; k < n-2; k++)
                    for (int m = k + 1; m < n-1; m++)
                        for (int o = m + 1; o < n; o++)
                            max_product = max(max_product, arr[i]*arr[j]*arr[k]*arr[m]*arr[o]);
        cout<< max_product<<endl;
    }
	return 0;
}
