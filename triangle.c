#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n, i, j;
	start:
	printf("Please enter rows number: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= i; j++) {
			
		    if (/*(j == 1) || (i == n) ||*/ (i == j)){
			
			printf("*");
		}
		else {
		 	printf(" ");
		 }
		}
			
			
		printf("\n");
		
			for (j = 1; j <= i; j--) {
			
		    if (/*(j == 1) || (i == n) ||*/ (i == j)){
			
			printf("*");
		}
		else {
		 	printf(" ");
		 }
		}
			
			
		printf("\n");
		
	}
	goto start;
	return 0;
	
}
