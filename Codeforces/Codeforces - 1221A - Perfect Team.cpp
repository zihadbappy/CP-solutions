#include<bits\stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int i, q, c, m, x, ans;


cin>>q;

for(i=0;i<q;i++)
{
    cin>> c>>m>>x;

    ans= min(c, m);
    ans=min(ans, (c+m+x)/3);
    cout<<ans<<endl;

}

return 0;
}
