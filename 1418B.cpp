#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], b[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
            cin>>b[i];

        int i, j;
        bool swapped;
        for (i = 0; i < n-1; i++)
        {
            swapped = false;
            for (j = n-i-1; j >0; j--)
            {
                if (arr[j] > arr[j-1] && b[j]==0 && b[j-1]==0)
                {
                    swap(&arr[j], &arr[j-1]);
                    swapped = true;
                }
            }
            if (swapped == false)
                break;
        }
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
	return 0;
}
