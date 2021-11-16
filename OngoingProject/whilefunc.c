/*
* Program: Implement a while structure
* Author: Natalia Figueroa
* Date: 9/28/21
* Purpse: illustrate tje implementation of a while loop
*/

#include <stdio.h>

int whilefunc(int j)
{
	int i = 0;
	
	//implement a simple while loop
	while(i < j)
	{
		printf("The value of i is %d\n",i);
		i++;
	} //while
	return(0);
} //whilefunc

