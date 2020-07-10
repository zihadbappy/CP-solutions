#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

     long int b[n], a[n];

     for(int i=0;i<n;i++){
         cin >> b[i];
     }

    long int MaX=0;

    for(int i=0;i<n;i++){
          if(i==0){
            a[i]= b[i]+0;
            MaX=a[i];
          }
          else{
              MaX=max(a[i-1], MaX);
              a[i]=b[i]+MaX;
          }
     }

     for(int i=0;i<n;i++){
         cout << a[i] << " ";
     }


    return 0;
}