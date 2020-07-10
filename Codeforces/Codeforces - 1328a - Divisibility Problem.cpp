#include<bits/stdc++.h>
using namespace std;
int main()
{

int tCase, i;

cin>>tCase;

for(i=0;i<tCase;i++)
{
    long long int a, b;

    cin>>a>>b;

    int ans;

    if(a<b)
        ans=b-a;

    else if(a%b==0) ans=0;

    else{

       long long int temp;
    temp=a/b;

    b=b*(temp+1);
    ans=b-a;
    }

    cout<<ans<<endl;

}


return 0;
}

