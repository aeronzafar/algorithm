#include<stdio.h>
#include<conio.h>
int merge(int A[], int start, int mid, int end)
{
	int p = start, q = mid+1;
	int arr[end-start+1],k=0;
	for(int i = start; i<=end; i++)
    {
        if(p>mid)
            arr[k++]=A[q++];
        else if(q>end)
            arr[k++]=A[p++];
        else if(A[p]<A[q])
            arr[k++]=A[p++];
        else
            arr[k++]=A[q++];
    }
    for(int p=0; p<k; p++)
        A[start++]=arr[p];
}

void merge_sort(int A[], int start, int end)
{
	if (start<end)
	{
		int mid = (start+end)/2;
		merge_sort(A,start,mid);
		merge_sort(A,mid+1,end);
		merge(A,start,mid,end);
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

	merge_sort(arr, 0, n-1);

	printf("\nAfter Sorted array : ");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

	return 0;
}
