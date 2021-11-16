/*
* Program: forfunc
* Author: Natalia Figueroa
* Date: 9/28/21
* Purpose: to illustrate the implementation of a for loop
*/

#include <stdio.h>

int forfunc(int j)
{
	int i;
	// now lets implement a simple for loop
	// limited by the variable j
	for(i=0; i<j; i++)
	{
		printf("The value of i is: %d\n",i);
	} //for
} //forfunc
