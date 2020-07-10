/*
ID: zihadba1
TASK: gift1
LANG: C++
*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    int n;
    fin>>n;

    string NP[n];
    int resAmount[n];

    for(int i=0; i<n; i++)
    {
        fin>> ws;
        getline(fin, NP[i]);
        resAmount[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        string s;
        fin>> s;
        for(int m=0; m<n; m++)
        {
            if(s==NP[m])
            {

                int noGive, amount;
                fin>> amount>> noGive;

                if(noGive!=0)
                resAmount[m]-=(amount-(amount%noGive));

                for(int j=0; j<noGive; j++)
                {
                    string tempStr;
                    fin>> ws;
                    getline(fin, tempStr);

                    for(int k=0; k<n; k++)
                    {
                        if(tempStr==NP[k] && noGive!=0)
                            resAmount[k]+= amount/noGive;

                    }
                }

            }


        }



    }



        for(int l=0; l<n; l++)
        {
            fout<< NP[l]<< " "<< resAmount[l]<<endl;
        }

    return 0;
}
