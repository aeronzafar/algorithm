#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char a[10][10];
int n=4;
void nQueensProblem();
void nQueen(int row);
int Feasible(int row, int col);
int GetMarkedCol(int row);

int main()
{
    nQueensProblem();
    return 0;
}
void nQueensProblem()
{
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            a[i][j]='#';
        }
    }
    nQueen(0);
    getch();
}

void nQueen(int row)
{
    if(row<n)
    {
        for(int col=0; col<n ; col++)
        {
            if(Feasible(row,col))
            {
                a[row][col]='Q';
                nQueen(row+1);
                a[row][col]='#';
            }
        }
    }
    else
    {
        printf("The Solution is : ");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    getch();
}

int Feasible(int row, int col)
{
    getch();
    int c;
    for(int r=0; r<n; r++)
    {
        c=GetMarkedCol(r);
        //abs() method is defined in stdlib.h
        if(col = c||abs(row-r)==abs(col-c))
        {
            return 0;
        }
    }
    return 1;
}

int GetMarkedCol(int row)
{
    for(int c=0; c<n; c++)
    {
        if(a[row][c]=='Q')
        {
            return c;
        }
    }
}
