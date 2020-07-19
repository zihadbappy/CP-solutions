//cf 1385A

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long int ar[3];
        cin >>ar[0]>>ar[1]>>ar[2];

        sort(ar,ar+3);

        if(ar[1]==ar[2])
        {
        cout<<"YES"<<endl;
        cout<<ar[2]<<" "<<ar[0]<<" "<<ar[0]<<endl;
        }
        
        else cout<<"NO"<<endl;

    }

 
}       