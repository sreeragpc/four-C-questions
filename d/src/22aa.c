/*
 ============================================================================
 Name        : 22aa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i,j,k,limit,a[500];
		setbuf(stdout,NULL);
		printf("enter the limit");
		scanf("%d",&limit);
		for(i=0;i<limit;i++){
			scanf("%d",&a[i]);
		}

		int count=0;
		    for(int i=0; i<limit; i++)
		    {
		        if(a[i]%2!=0)
		        {
		            j=i+1;
		            for( k=i;k<limit; k++)
		        {
		            a[k]=a[j];
		            j++;
		        }
		            count++;
		        }
		    }limit=limit-count;
		printf("%d",a[0]);
		printf("\n");
		for(i=1;i<limit;i++){
				for(j=1;j<=2*i;j++){
					printf("%d",a[j]);
				}printf("\n");
                 for(j=1;j<=i;j++){
			      printf("_");


				}printf("%d",a[j]);


				printf("\n");
		}

	return EXIT_SUCCESS;
}
