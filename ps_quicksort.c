
#include "push_swap.h"

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/* return value is the pivot 													*/
/* 6 3 7 5 1 2 [4] 																*/
/* 4 is the pivot value because it is the last index in the array (int high) 	*/
/* j and i will be set to low (first index) 									*/
/* j will get incremented in every loop 										*/
/* i will only get incremented if array[j] is less than pivot_value 			*/
/* j 			   																*/
/* 6 3 7 5 1 2 [4] 																*/
/* i 			   																*/
/*   j 			   																*/
/* 6 3 7 5 1 2 [4] 																*/
/* i 			   																*/
/*   j 			   																*/
/* 3 6 7 5 1 2 [4] 																*/
/*   i 			   																*/
/*              j  																*/
/* 3 1 2 5 6 7 [4] 																*/
/*       i 		   																*/
/*              j  																*/
/* 3 1 2 [4] 6 7 5 																*/
/*        i		   																*/
/* return 4 	   																*/
/* can optimise the algorithm by choosing a random value between low and high 	*/
/* rather than choosing the last index value 									*/
int partition(int array[], int low, int high)
{
	int pivot_value;
	int i;
	int j;
	int pivot_index;

	pivot_index = low + (rand() % (high - low));

	if (pivot_index != high)
		swap(&array[pivot_index], &array[high]);
	
	pivot_value = array[high];
	i = low;
	j= low;

	while (j < high)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
		j++;
	}

	swap(&array[i], &array[high]);

	return (i);
}

/* 0 - first index   				*/
/* high - last index 				*/
/* 6 3 7 5 1 2 [4] 					*/
/*              |	    			*/
/*		3 1 [2] 4 6 7 [5]			*/
/*			 |		   |			*/
/*		   1 2 3       5 7 [6] 		*/
/*							|		*/
/*							6 7		*/
void quicksort_recursion(int array[], int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high);
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}

void quicksort(int array[], int length)
{
	quicksort_recursion(array, 0, length - 1);
}

int main()
{
	int a[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45};
	int length;
	int i;

	length = 13; 
	i = 0;

	quicksort(a, length);
	while (i < length)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");

	return (0);
}
 