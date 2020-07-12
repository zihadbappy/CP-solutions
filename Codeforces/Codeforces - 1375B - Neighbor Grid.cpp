#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int n, m, f=1;

        cin>>n>>m;
         int ar[n][m];

        for(int j=0;j<n;j++)
            for(int k=0;k<m;k++)
            cin>> ar[j][k];

        for(int j=0;j<n;j++)
        {
             if(f==0) break;
            for(int k=0;k<m;k++)
            {
                int a=4;
                 if(j==0 || j==n-1) a--;
              if(k==0 || k==m-1) a--;
           
             if( ar[j][k]>a)  
                {
                f=0;
                cout<< "NO"<< endl;
                break;
                }
            }
        }


        
        if(f==1)
        {
        cout<< "YES"<< endl;

        for(int j=0;j<n;j++)
            {
                for(int k=0;k<m;k++)
                {
                            
                    ar[j][k]=4;
                    if(j==0 || j==n-1) ar[j][k]--;
                    if(k==0 || k==m-1) ar[j][k]--;

                    cout<< ar[j][k]<< " ";

                }
        cout<<endl;
            }  
        }
    }
}