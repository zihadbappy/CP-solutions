#include<bits/stdc++.h>
#include <cmath>

using namespace std;
int main()
{
long long int n, k;

cin>>n>>k;

long long int x;
x=ceil((double)n/2);

if(k<=x) cout<< 2*k-1<<endl;
else cout<< 2*(k-x)<< endl;


return 0;
}
