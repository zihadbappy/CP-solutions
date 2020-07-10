/*
ID: zihadba1
TASK: friday
LANG: C++
*/


#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n;
    fin>>n;

    int jan=31;
    int mar=31;
    int may=31;
    int jul=31;
    int aug=31;
    int oct=31;
    int dec=31;
    int apr=30;
    int jun=30;
    int nov=30;
    int sep=30;
    int feb;


    int days[7]={0};

    int temp=13%7;
    days[temp]++;

    for (int i=0 ; i<n ; i++ )
    {
        temp= (jan+temp)%7;
        days[temp]++;

            if( (i+1900)%4==0 && (i+1900)%100!=0) feb=29;
            else if((i+1900)%400==0) feb=29;
            else feb=28;


         temp= (feb+temp)%7;
        days[temp]++;

         temp= (mar+temp)%7;
        days[temp]++;

         temp= (apr+temp)%7;
        days[temp]++;

         temp= (may+temp)%7;
        days[temp]++;

         temp= (jun+temp)%7;
        days[temp]++;

         temp= (jul+temp)%7;
        days[temp]++;

         temp= (aug+temp)%7;
        days[temp]++;

         temp= (sep+temp)%7;
        days[temp]++;

         temp= (oct+temp)%7;
        days[temp]++;

          temp= (nov+temp)%7;
        days[temp]++;


        if (i!=n-1){
         temp= (dec+temp)%7;
        days[temp]++;}

    }

fout<<  days[6]<< " " << days[0]<< " " <<days[1]<< " " <<days[2]<< " " <<days[3]<< " " <<days[4]<<" "<< days[5]<< endl;


    return 0;
}
