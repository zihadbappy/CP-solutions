#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{

int n, m, i,j;
cin>> n >> m;

int mat[n][m];

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        cin>> mat[i][j];
}

int sum=0, x;
for(i=n-1;i>=0;i--)
{
    for(j=m-1;j>=0;j--)
    {
        if(mat[i][j]==0)
        {x= min(mat[i+1][j], mat[i][j+1]);
            mat[i][j]=x-1;
        }
         sum+=mat[i][j];


    }
}
int f=0, g=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
         if(mat[i][j]<=mat[i-1][j] && i!=0) f=1;
         if(mat[i][j]<=mat[i][j-1] && j!=0) g=1;
    }
}
if(f==1 || g==1) cout<<"-1";
else cout<<sum;


return 0;
}


