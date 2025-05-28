#include<iostream>
using namespace std;
int main()
{
    int nodes;
    cin>>nodes;
    int graph[nodes][nodes];
    for(int i=0;i<nodes;i++)
        for(int j=0;j<nodes;j++)
        graph[i][j]=(i==j)?0:-1;
    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            cout<< graph[i][j]<< " ";
        }
        cout<<endl;
    }
 int edges;
 cin>>edges;
 for(int i=0;i<edges;i++)
 {
     int n1,n2;
     cin>>n1>>n2;
     graph[n1][n2]=1;
     graph[n2][n1]=1;
 }
 for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            cout<< graph[i][j]<< " ";
        }
        cout<<endl;
    }


}
