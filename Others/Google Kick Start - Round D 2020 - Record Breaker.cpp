#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
for(int j=1;j<=t;j++)
{
int n;
cin>>n;
int ar[n];

for(int i=0;i<n;i++)
    cin>>ar[i];

int lowerMax=0, ans=0;

for(int i=0;i<n;i++)
{   if(n==1) ans++;

    else if(i==n-1 && ar[i]>lowerMax)   
    ans++;

    else if(ar[i]>lowerMax && ar[i]> ar[i+1])
    ans++;
    
    lowerMax= max(lowerMax, ar[i]);
}
cout<< "Case #" <<j <<": "<< ans<<endl;

}

    
}