#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

     long long int ar[n];

     for(int i=0;i<n;i++) cin>>ar[i];

     for(int i=0;i<n;i++)
     {
         int f=1;
        long long int rt=sqrt(ar[i]);
         if(rt*rt==ar[i] && ar[i]!=1)
         {
             for(int j=2;j<=sqrt(rt);j++)
             {
                 if(rt%j==0)
                 {
                     f=0;
                     break;
                 }

            }
         }
         else{
             f=0;
         }
            
       if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
         
     }

}