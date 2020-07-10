#include<bits\stdc++.h>
using namespace std;
int main()
{

    int n, i, j, q, f, sum, k;
    cin>> q;

    for(i=0; i<q; i++)
    {

            f=0;
            sum=0;
        cin>>n;
        int arr[n];

        for(j=0; j<n; j++)
        {
            cin>>arr[j];
        }

        sort(arr, arr+n, greater<int>());

        for(j=0; j<n; j++)
        {

            if(arr[j]<=2048)
            {
                if(arr[j]==2048)
                {
                    f=1;
                    break;
                }
                else{
                for(k=1; k<=n-j; k++)
                    {
                        sum= arr[j]+arr[j+k];
                        if(sum==2048)
                            {f=1;
                            break;
                            }
                            arr[j]=sum;
                    }
                }
                if(f==1)break;
            }

        }
        if(f==1)cout<<"YES"<< endl;
        else cout<< "NO"<< endl;
    }

    return 0;
}
