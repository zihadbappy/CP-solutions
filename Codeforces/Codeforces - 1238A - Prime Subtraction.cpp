#include<bits/stdc++.h>
using namespace std;
int main()
{


int n;
cin>> n;

for(int i=0;i<n;i++)
{
    unsigned long long x, y;
    int f=0;
    cin>>x>>y;

    unsigned long long z = x-y;

            bool prime[z+1];
            memset(prime, true, sizeof(prime));

            for (int p=2; p*p<=x/2; p++)
            {
                if (prime[p] == true)
                {
                    for (int j=p*p; j<=100 && j<=z; j += p)
                    {
                        prime[j] = false;
                    }
                if(z%p==0){f=1;
                break;}

                }
            }

    if(f==1) cout<< "YES"<<endl;
    else cout<< "NO"<< endl;

}



return 0;
}
