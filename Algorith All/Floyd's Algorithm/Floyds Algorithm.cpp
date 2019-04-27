#include<stdio.h>
#include<conio.h>
int min(int x, int y);
int main()
{
    int n, i, j,k, D[10][10];
    printf("Enter no of vertices : ");
    scanf("%d",&n);

    //Inputting data
    for(i = 1 ; i<=n ; i++)
    {
        printf("Enter value for row %d : \n",i);
        for(j = 1; j<=n ; j++)
        {
            scanf("%d",&D[i][j]);
        }
    }

    //putting infinity instead of 0
    for(i = 1 ; i<=n ; i++)
    {
        for(j = 1; j<=n ; j++)
        {
            if(D[i][j]==0)
            {
                D[i][j]=999;
            }
        }
    }


    //Making Shortest path
    for(k = 1 ; k<=n ; k++)
    {
        for(i = 1; i<=n ; i++)
        {
            for(j=1; j<=n;j++)
                D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
        }
    }

    //Printing Shortest path
    printf("\nShortest Path is : \n");
    for(i = 1 ; i<=n ; i++)
    {
        for(j = 1; j<=n ; j++)
        {
            printf("%d ",D[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int min(int x, int y)
{
    if(x<y)
        return x;
    else
        return y;
}
