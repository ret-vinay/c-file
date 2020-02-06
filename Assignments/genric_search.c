#include<stdio.h>

void sort(int *ptr, int n)
{
	int i, j, temp;
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(ptr[i] > ptr[j])
			{
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}

void generic_search(int *arr, int item, int size)
{
	int up, low, mid, i;
	low = 0;
	up = size - 1;
		mid = (low + up) / 2;
	while(low <= up && item != arr[mid])
	{
		if(item > arr[mid])
		{
			low = mid + 1;
		}
		if(item < arr[mid])
		{
			up = mid - 1;
		}
		if(item == arr[mid])
		{
			printf("%d found at position %d\n", item, (mid + 1));
		}
		if(low > up)
		{
			printf("item is not found in array\n");
		}
	}
}

int main()
{
	int i, low, up, mid, item, size;

	printf("enter the size of an array\n");
	scanf("%d", &size);

	int arr[size];

	printf("enter the elements of an array\n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, size);

	printf("sorted array\n");
	for(i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	puts("");

	printf("Enter the item to be searched\n");
	scanf("%d", &item);
	
	generic_search(arr, item, item);
}
