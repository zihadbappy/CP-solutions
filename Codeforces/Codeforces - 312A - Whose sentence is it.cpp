#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
bool f, g;
string sen;

cin >> n;

    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    //cin.sync();
    cin>>ws;

while(n--)
{    getline(cin, sen);

        f=g=0;
    if(sen.rfind("lala.")==sen.size()-5)
       f=1;

    if(sen.find("miao.")==0) g=1;

    if(( f && g) || (!f && !g))
        cout << "OMG>.< I don't know!\n";
        else if(f) cout<< "Freda's\n";
       else if(g) cout<< "Rainbow's\n";
}

return 0;
}

