#include<bits/stdc++.h>
using namespace std;
int main()
{
int q;
cin >> q;

for(int i=0;i<q;i++)
{
    int sum =0, indGo,noGo;
    cin>> noGo;

    for(int j=0;j<noGo;j++)
    {
        cin>> indGo;
        sum+=indGo;
    }

    if((sum%noGo)==0) cout<< sum/noGo<<endl;
    else cout<< sum/noGo+1<<endl;


}




}
