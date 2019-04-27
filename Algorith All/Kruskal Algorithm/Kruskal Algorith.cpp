//This is C++ program
//Program for finding minimum spanning tree using Krushkal algorithm
#include<iostream>
using namespace std;
int find(int i,int v[])
{
    while(v[i])
    {
        i=v[i];
    }
    return i;
}
int un(int i, int j,int v[])
{
    if(i!=j)
    {
        v[j]=i;
        return 1;
    }
    return 0;
}
int main()
{
    int a[500][500],visit[100],n,x,y,u,v,ne=1,min,mincost=0;
    cout<<"Enter no of nodes ( size of array) : ";
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
        cout<<"\n";
    }
    for(int i=1;i<=n;i++)
    {
        visit[i]=0;
    }
    while(ne<n)
    {
        min=999;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]<min)
                {
                        min=a[i][j];
                        x=u=i;
                        y=v=j;
                }
            }
        }
        u=find(u,visit);
        v=find(v,visit);
        if(un(u,v,visit))
        {
            cout<<"\nEdge No: "<<ne<<" " <<x<<" " <<y<< " "<<min;
            ne=ne+1;
            mincost=mincost+min;
        }
        a[x][y]=a[y][x]=999;
    }
    cout<<"\nMinimum Cost = " << mincost;
    return 0;
}
