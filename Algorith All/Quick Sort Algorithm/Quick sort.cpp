#include<stdio.h>
#include<conio.h>
int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
    int temp;
	for (int j = low; j <= high- 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
		}
	}
	temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
    int n;
    printf("\nEnter how much no you want to enter : \n");
    scanf("%d",&n);
    int arr[n];

    printf("\nInput %d data : \n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nBefore Sorted array : ");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

	quickSort(arr, 0, n-1);

	printf("\nAfter Sorted array : ");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

	return 0;
}
