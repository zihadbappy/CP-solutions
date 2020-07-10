#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
int n, k;
double x, y;
double  prevx, prevy;

cin>> n>>k;

double ans=0;
int i=0;
while(n--)
{
    cin>>x>>y;
    if(i!=0)
    {
        ans+=sqrt((x-prevx)*(x-prevx)+(y-prevy)*(y-prevy));
    }

    prevx=x;
    prevy=y;
    i++;
}

cout<< fixed << setprecision(6) <<(double)(ans*k)/50 <<endl;

return 0;
}
