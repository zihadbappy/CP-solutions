#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{

int a, b, c, arr[3], ans=0;

cin>>arr[0]>>arr[1]>>arr[2];
sort(arr, arr+3);

a=arr[2]; b=arr[1]; c=arr[0];


if(a>0){ans++; a--;}
if(b>0){ans++; b--;}
if(c>0){ans++; c--;}

if(a>0 && b>0) {ans++; a--; b--;} //cout<<a<<b<<c<<ans<<endl;
if(a>0 && c>0) {ans++; a--; c--;}//cout<<a<<b<<c<<ans<<endl;
if(c>0 && b>0) {ans++; c--; b--;}


if(a>0 && b>0 && c>>0) ans++;

cout<< ans<<endl;




}




return 0;
}
