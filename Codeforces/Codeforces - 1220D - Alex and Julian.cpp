#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, ans, ans2;

    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
        cin>> arr[i];

    if(n==1)
    {
        ans=0;
         cout<< ans<< endl;
    }

    else if(n==3)
    {
        ans=1;
    ans2=arr[1];
    cout<< ans<< endl;
    cout<< ans2;
    }

    else {ans=0;
    cout<< ans<< endl;
    }



return 0;
}
