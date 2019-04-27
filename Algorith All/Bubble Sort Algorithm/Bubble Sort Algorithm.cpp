#include<stdio.h>
#include<conio.h>
void bubble_Sort(int arr[], int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("\nEnter how much no you want to enter : ");
    scanf("%d",&n);
    int arr[n];

    printf("\nInput %d data : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nBefore Sorted array:");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

	bubble_Sort(arr,n-1);

	printf("\nAfter Sorted array:");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

	return 0;
}
