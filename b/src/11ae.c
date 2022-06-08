/*
 ============================================================================
 Name        : 11ae.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,t;
	setbuf(stdout,NULL);
	printf("Enter the number of students present=");
	scanf("%d",&n);
	t=n*(n-1)/2;
	printf("The number of handshakes possible in between the students=%d",t);
	return EXIT_SUCCESS;
}
