#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int nodes;
    cin>>nodes;
    vector<int> graph[nodes];

 int edges;
 cin>>edges;
 for(int i=0;i<edges;i++)
 {
     int n1,n2;
     cin>>n1>>n2;
     graph[n1].push_back(n2);
     graph[n2].push_back(n1);
 }
 for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<< graph[i][j]<< " ";
        }
        cout<<endl;
    }


}

