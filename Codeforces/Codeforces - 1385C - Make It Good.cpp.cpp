//cf 1385C

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n; int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int f=0, ans=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>a[i-1]) f=1;
            if(f==1 && a[i]<a[i-1]){ans=i; break;}
        }
        cout<< ans<<endl;
    } 
}