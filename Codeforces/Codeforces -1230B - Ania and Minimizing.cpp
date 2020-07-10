#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    fstream cin;
    cin.open("a.txt");
    int n, k;

    cin>> n>> k;

    long long s;

    cin>> s;

    int arr[n];
    int i;
    for( i=0; i<n; i++)
    {
        arr[n-i-1]=s%10;
        s/=10;
    }

        for( i=0; i<n; i++)
{
    cout<< arr[i]<< endl;
}

    if(k==0) cout<<s;
    if(n==1)
    {if(k==1) arr[0]=0;
      }

    else
    {
        if(arr[0]!=1)
        {
        arr[0]=1;
        for(i=1; i<=k-1; i++)
            arr[i]=0;
    }

    else
    {
        for(i=1; i<=k; i++)
            arr[i]=0;
    }
}

for( i=0; i<n; i++)
{
    cout<< arr[i];
}


return 0;
}


