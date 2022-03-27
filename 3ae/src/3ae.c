/*
 ============================================================================
 Name        : 3ae.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,flag=0,length1=0,length2=0;
	char name1[20];
	char name2[20];
	setbuf(stdout,NULL);
	printf("enter a name1");
	gets(name1);
	printf("enter a name2");
	gets(name2);
	for(i=0;name1[i]!='\0';i++){
		length1++;
	}
	for(i=0;name2[i]!='\0';i++){
			length2++;
		}
	if(length1!=length2){
		printf("\n both names are not same");

	}else{


	for(i=0;i<length1;i++){
		if(name1[i]!=name2[i]){
			flag=1;
		}


	}
        if(flag==1){
		printf("\n both names are not same");}
		else{
			printf("\nboth names are same");
		}

	}
	return EXIT_SUCCESS;
}
