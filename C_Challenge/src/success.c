#include <stdio.h>
#include <success.h>

/*For testing*/
float sort_Array[10];
int numberOfElements = 10;
int medianIndex = 0;
/* ret = 0 is success and ret = 1 is failure due to invalid range*/


int sort(void)
{
	//currently implementing the sorting of 10 elements

	int index1 = 0;
	int index2 = 0;
	float swap;
	int ret = 0;

	/* reading from file*/
	FILE* sortMyFile;

	sortMyFile = fopen("D:/Test/Sakthi_C_Challenge/C_Challenge/C_Challenge/src/FileForSorting.txt", "r");

	for (index1 = 0; index1 < 10; index1++)
	{
		fscanf(sortMyFile, "%f", &sort_Array[index1]);
	}
	printf("\nNumbers before sorting:\n");

	for (index1 = 0; index1 < 10; index1++)
	{
		printf("%f\t", sort_Array[index1]);
	}
	fclose(sortMyFile);
	for (index1 = 0; index1 < 10; index1++)
	{
		if (!(sort_Array[index1] > -70 && sort_Array[index1] < +2.08E9))
		{
			printf("Invalid Range. Program End");
			ret = 1;
		}
	}

	/*printf("Enter the number of elements\n");
	scanf("%d", &numberOfElements);

	printf("Enter %d integers\n", numberOfElements);

	while (index1 < numberOfElements)
	{
		scanf("%f", &sort_Array[index1]);
		if (sort_Array[index1] > -70 && sort_Array[index1] < +2.08E9)
		{
			index1++;
		}
		else
		{
			printf("Invalid range try again\n");
		}
		
	}*/
	printf("All elements received\n");
	printf("Sorting....\n");

	

	for (index1 = 0; index1 < numberOfElements - 1; index1++)
	{
		for (index2 = 0; index2 < numberOfElements - index1 - 1; index2++)
		{
			if (sort_Array[index2] > sort_Array[index2 + 1])
			{
				swap = sort_Array[index2];
				sort_Array[index2] = sort_Array[index2 + 1];
				sort_Array[index2 + 1] = swap;
			}
		}
	}

	medianIndex = numberOfElements / 2;

	printf("Sorting completed\n");

	printf("Elements after sorting:\n");

	for (index1 = 0; index1 < numberOfElements; index1++)
		printf("%f\n", sort_Array[index1]);

	printf("Median Value: %f:\n", sort_Array[medianIndex]);

	return ret;
}