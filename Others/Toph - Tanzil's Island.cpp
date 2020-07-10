#include<bits/stdc++.h>
using namespace std;
int main()
{

int t, i, l;
const double PI = 3.141592653589793;
double ans;

cin>>t;

for(i=0;i<t;i++)
{
    cin>>l;

    ans= PI * l * l;

    printf("%.5lf\n",ans);
}



return 0;
}
