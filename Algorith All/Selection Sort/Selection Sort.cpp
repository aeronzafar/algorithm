#include<stdio.h>
#include<conio.h>
void Selection_Sort(int arr[], int n)
{
	int mid, temp;
	for(int i=0;i<n-1;i++)
    {
        mid=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[mid]>arr[j])
                mid=j;
        }
        if(mid!=i)
        {
            temp=arr[mid];
            arr[mid]=arr[i];
            arr[i]=temp;
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

	Selection_Sort(arr,n);

	printf("\nAfter Sorted array:");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

	return 0;
}
