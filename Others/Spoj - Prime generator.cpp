#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int pStart, int pEnd)
{
    int n=pEnd;

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=pStart; p<=n; p++)
       if (prime[p])
          cout << p << endl;

          cout<<endl;
}

// Driver Program to test above function
int main()
{
    int tCase;
    cin>> tCase;

    for(int i=0;i<tCase;i++)
    {
        int pStart, pEnd;
    cin>> pStart>> pEnd;
    SieveOfEratosthenes(pStart, pEnd);

    }

    return 0;
}
