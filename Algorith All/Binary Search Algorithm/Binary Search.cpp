#include<stdio.h>
#include<conio.h>
void binary_search(int arr[], int n, int data)
{
    int mid, low = 0, high = n-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(arr[mid]==data)
        {
            printf("%d is found at %d position.",data,mid+1);
            return;
        }
        else if(arr[mid]>data)
            high=mid-1;
        else
            high=mid+1;
    }
    printf("\n%d not found in array.",data);
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
    binary_search(arr,n,data);

	return 0;
}
