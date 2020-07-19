//cf 1380C

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

int t; cin>>t;
while(t--)
{
    long int n, x; cin >>n>>x;
    long int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    
    sort(ar, ar+n, greater<int>());

    int ans=0, j=0;
    for(int i=0;i<n;i++)
    {
        j++;
        if(ar[i]*j>=x)
        {
            ans++;
            j=0;
        }

    }
    cout<<ans<<endl;

}


}