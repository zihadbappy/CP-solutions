#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){


int t;
cin>>t;

for(int i=0;i<t;i++)
{
    long long int n;
    cin >>n;
    if(n%2==0)
    cout<< n/2<<" "<< n/2<<endl;
    else{
        long long int div;
        int f=0;
        for(long long int j=3;j<=sqrt(n);j+=2){
           
            if(n%j==0){
                div=j;
                f=1;
                break;
            }
        }
        div=n/div;

        if(f==1)
        cout<< div<<" "<<n-div<<endl;

        else cout<< 1 <<" "<<n-1<<endl;

    }


}

    
}