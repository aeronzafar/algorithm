//This is C++ program
//Program for finding minimum spanning tree using Prims algorithm
#include<iostream>
using namespace std;
int main()
{
    int a[500][500],visit[100],n,u,v,ne=1,min,mincost=0;
    cout<<"Enter total no of nodes (size of array) : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"\nEnter values for row "<<i<<"\n";
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
            {
                a[i][j]=999;
            }
        }
    }
    cout<<"\n\n";
    /* This is predefine input in array
    int a[n][n] = { {0, 2, 0, 6, 0},
                    {0, 2, 0, 6, 0},
                    {2, 0, 3, 8, 5},
                    {0, 3, 0, 0, 7},
                    {6, 8, 0, 0, 9},
                    {0, 5, 7, 9, 0}};
    */

    for(int i=1;i<=n;i++)
    {
        visit[i]=0;
    }

    visit[1]=1;

    while(ne<n)
    {
        min=999;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]<min)
                {
                    if(visit[i]!=0)
                    {
                        min=a[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
        }
        if(visit[u]==0 || visit[v]==0)
        {
            cout<<"\nEdge No: "<<ne<<" " <<u<<" " <<v<< " "<<min;
            ne=ne+1;
            mincost=mincost+min;
            visit[v]=1;
        }
        a[u][v]=a[v][u]=999;
    }
    cout<<"\nMinimum Cost = " << mincost;
    return 0;
}
