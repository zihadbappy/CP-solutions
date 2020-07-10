#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
    int b, p, f, h, c;

    cin>>b>>p>>f;
    cin>> h>>c;

    int ans=0;
    if (b<=1) ans=0;

    else if(h>c)
    {
        b=b/2;
        int temp= min(b, p);
        b-= temp;
        p-=temp;
        ans= h*temp + (min(b, f))*c;
    }
    else
    {
        b=b/2;
        int temp= min(b, f);
        b-= temp;
        f-=temp;
        ans= c*temp + (min(b, p))*h;
    }

        cout<< ans<<endl;

}

return 0;
}
