#include <stdio.h>
void bubbleSort(int arr[], int n)
{
	int i, j;
	int flag;
	for (i = 0; i < n - 1; i++) {
		flag=0;
		for (j = 0; j < n - i - 1; j++) 
		{
			if (arr[j] < arr[j + 1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if (flag==0)
			break;
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[] = { 5,0,-1,3,6,9,2,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
