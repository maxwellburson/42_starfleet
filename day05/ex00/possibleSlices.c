#include "header.h"
#include <stdio.h> //printf()
#include <string.h> //bzero()
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>

void printPossibleSlices(int pizzaSize) {
	int *slices;

	if (NULL == (slices = malloc(sizeof(*slices) * ((unsigned int)INT_MAX + 1))))
		return ;
	recursiveStep(pizzaSize, slices, 0);
}

void recursiveStep(int pizzaSize, int *slices, int step) {
	slices[step] = 0;
	if (pizzaSize == 0)
		printSlices(slices);
	while (0 < pizzaSize--)
	{
		slices[step]++;
		recursiveStep(pizzaSize, slices, step + 1);
	}
}

void printSlices(int *slices)
{
	printf("[");
	while (*(slices + 1))
	{
		printf("%d, ", *slices);
		slices++;
	}
	printf("%d]\n", *slices);
}