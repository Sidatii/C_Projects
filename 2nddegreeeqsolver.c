#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	float a, b, c, Delta;
	double X, X1, X2;
	start:
	system("CLS");
	
		printf("                    .........................................................\n"
		       "                    ####### Welcome to second degree equations solver #######\n"
		       "                    ...................[MADE BY SIDATT NH]...................\n\n\n");
	

		
	printf("Please enter the parameter 'a': ");
	scanf("%f", &a);
	printf("Please enter the parameter 'b': ");
	scanf("%f", &b);
	printf("Please enter the parameter 'c': ");
	scanf("%f", &c);
	
	printf("\n\nYour equation looks like this: (%.2f)X^2 + (%.2f)X + (%.2f)= 0\n\n", a, b, c);
	
	Delta = b*b - 4*a*c;
	
	printf("Your equations delta value is: %.2lf\n\n", Delta);
	
	if(Delta == 0) {
			printf("Your equation has one root... \n\n");
			X = (-b/2*a);
			printf("Your equations only solution is: X = %.2lf\n\n", X);
		 }
			
		else if (Delta > 0)
		{
	
			printf("Your equation has two distinct real solutions... \n\n");
			X1 = (-b -  sqrt(Delta) )/2*a;
			X2 = (-b + sqrt(Delta) )/2*a;
			printf("Your equations solutions are: X1 = %.2lf and X2 = %.2lf\n\n", X1, X2);
		}	
		
		else if(Delta < 0)
		{
			printf("Your equation has no solutions in R set... \n\n");	
	}
	
	
	printf("                           ..........................................\n"
           "                           ####### We hope we Helped you. BYE #######\n"
		   "                           .........................................\n\n\n");
	
	printf("1. Resolve another equation.\n2.Quit program.\nPlease enter you choice: ");
	int m;
	scanf("%d", &m);
	
	switch (m) {
		case 1:
			goto start;	
			break;
		case 2:
			break;
	}
	
	return 0;
}
