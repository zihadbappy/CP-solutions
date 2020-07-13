#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++)
    {
        int n, m, x, f=1;
        cin>>n>>m;
        
        for(int j=0;j<n;j++)
            for(int k=0;k<m;k++)
            {
            cin>> x;
            int possibleAdj=4;
             if(j==0 || j==n-1) possibleAdj--;
             if(k==0 || k==m-1) possibleAdj--;
             if(x>possibleAdj) f=0;
            }
        cout<<(f? "YES" : "NO")<<endl;

        if(f)
        {   
            for(int j=0;j<n;j++)
            {for(int k=0;k<m;k++)
                {
                int possibleAdj=4;
                if(j==0 || j==n-1) possibleAdj--;
                if(k==0 || k==m-1) possibleAdj--;
                cout<<possibleAdj<<' ';
                }
            cout<<endl;
            }
        }    
    }
}