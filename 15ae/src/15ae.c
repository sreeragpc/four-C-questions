/*
 ============================================================================
 Name        : 15ae.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j;
	printf("enter the limit:");
	scanf("%d",&limit);
	for(i=0;i<=limit;i++){
		for(j=0;j<=limit;j++){
			if(j=0||j=limit){printf("*");
		}else{
			printf(" ");
		}
		}

	return EXIT_SUCCESS;
}
