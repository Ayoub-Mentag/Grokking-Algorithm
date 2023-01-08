#include <stdio.h>

void	find_element(int *arr, int size_of_arr, int to_be_found)
{
	int middle = size_or_arr / 2;
	int low = 0;
	int high = size_of_arr - 1;
	int found = 0;
	while (low <= high)
	{
		if (arr[middle] == element)
		{
			found = 1;
			break ;
		}
		else if (arr[middle] < element)
			low = middle + 1;
		else
			high = middle - 1;
	}
	if (found == 1)
		printf("Element has been found\n");
	else
		printf("The element has been not found");
}


int main(int ac, char **av)
{
	int element = 65;
	int *arr = malloc((ac - 1) * sizeof(int));
	find_element(arr, ac -1, element);
	return (0);
}
