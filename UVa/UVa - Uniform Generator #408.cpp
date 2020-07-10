#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main()
{
int step, mod;

while(cin>>step>>mod)
{
    int idx=0;
    bool cho[mod]={false};
    cho[idx]=true;
    idx+=step;
    while(idx!=0)
    {
        cho[idx]=true;
        idx= (idx+step)%mod;
    }


    int f=1;
    for(int i=0;i<mod;i++)
    {
        if(cho[i]==false)
        {
            f=0;
            break;
        }
    }

    if(f==1) cout<< setw(10)<< step<< setw(10)<< mod<< "     "<< "Good Choice"<<endl;
    else cout<< setw(10)<< step<< setw(10)<< mod<< "     "<< "Bad Choice"<<endl;

}



return 0;
}
