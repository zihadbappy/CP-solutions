#include<bits/stdc++.h>
#include<vector>
using namespace std;



int main()
{

for(;;)
{
    double h, u, d, f, fl=-1;
    int i;

    cin>>h>>u>>d>>f;
    if(h==0)break;

    double cuHei=0;
    double ff = ((double)u/100)*f;

    for(i=1;;i++)
    {


        if(i>1){
        u-=ff;
        if(u>=0)
        cuHei+=u;
        //cout<< cuHei<< endl;
        }
        else cuHei+= u;

        if(cuHei>h)
        {
            fl=1;
            break;
        }


        cuHei-=d;

        if(cuHei<0)
        {
            fl=0;
            break;
        }

    }

    if(fl==0)
        cout<<"failure on day " << i <<endl;
    if(fl==1)
        cout<<"success on day " << i << endl;

}



return 0;
}
