/*
* Program dowhilefunc
* Author: Natalia Figueroa
* Date: 9/28/21
* Puropse: implement a do-while loop for illustraction
*/

#include <stdio.h>

int dowhilefunc(int j)
{
	int i=8;
	
	//implement a simple do-while loop
	
	do {
		printf("value of i: %d\n",i);
		i++;
	} while(i<j);
	
	return(0);
} //dowhilefunc
