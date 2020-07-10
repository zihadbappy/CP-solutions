#include<bits/stdc++.h>
using namespace std;


string path;
vector <string> result;
string grid[8];
bool visited[8][8];
int n, m;
int prevx, prevy;

void dfs(int x, int y)
{

    if(x<0 || x>=m || y<0 || y>=n) return;
    if(visited[x][y]==true || grid[x][y]!=path[0]) return;

    visited[x][y]=true;

    if(path[0]!='@')
    {
        if(x<prevx) result.push_back("forth");
        else if(y<prevy) result.push_back("left");
        else if(y>prevy) result.push_back("right");


    }
    path.erase(path.begin());

    prevx=x;
    prevy=y;


    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}

/*
2
6 5
PST#T
BTJAS
TYCVM
YEHOF
XIBKU
N@RJB
5 4
JA#X
JVBN
XOHD
DQEM
T@IY
*/


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        path="@IEHOVA#";
        memset(visited, false, sizeof(visited));

        cin>>m>>n;

        for(int i=0;i<m;i++)
            cin>>grid[i];

        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(grid[i][j]==path[0] && visited[i][j]==false )
                {
                    dfs(i, j);
                    break;
                }
            }
        }

        for(int i = 0; i < 7; i++){
            if(i==6) cout<<result[i];
            else cout<<result[i]<<" ";
        }
        cout<<endl;

        result.clear();




    }




return 0;
}
