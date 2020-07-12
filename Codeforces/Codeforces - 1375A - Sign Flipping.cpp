#include<bits/stdc++.h>
using namespace std;
int main(){

int t, n;
cin >>t;

for(int i=0;i<t;i++)
    {
    cin >>n;
    long long int ar[n];

    for(int j=0;j<n;j++)
    {
        cin>> ar[j];
        
        if(j%2==0 && ar[j]<0) ar[j]-= 2*ar[j];
        else if(j%2==1 && ar[j]>0) ar[j]-=2*ar[j];
        cout<< ar[j] <<" ";

    }


    cout<<endl;

        
    }
}