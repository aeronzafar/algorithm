#include<stdio.h>
#include<conio.h>
void search(int arr[], int n, int data)
{
    for(int i = 0; i<n; i++)
    {
        if(data==arr[i])
        {
            printf("%d is found at %d position.",data, i+1);
            return;
        }
    }
    printf("%d not found in array.",data);
}

int main()
{
    int n, data;
    printf("\nEnter how much no you want to enter : ");
    scanf("%d",&n);
    int arr[n];

    printf("\nInput %d data : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter which data you want to search : ");
    scanf("%d",&data);
    search(arr,n,data);

	return 0;
}
