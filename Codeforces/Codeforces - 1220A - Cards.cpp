#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, one=0, zero=0, i, ans[10000];
string arr;
cin >> n;

getchar();

getline(cin, arr);// arr[n];

//for(i=0;i<n;i++)
  //  cin>> arr[i];


for(i=0;i<n;i++)
{
    if(arr[i]=='z')
        zero++;

    else if(arr[i]=='n')
        one++;
}
for(i=0;i<one+zero;i++)
    ans[i]=0;



for(i=0;i<zero+one;i++)
{
    if(i<one) ans[i]=1;

    else ans[i]=0;

    cout<< ans[i];
    cout<< ' ';
}
return 0;
}
