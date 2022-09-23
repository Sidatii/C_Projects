#include<stdio.h>  
int main()    
{    

 //int i,number,fact;

	start:
		system("CLS");
	printf("                                .............................................\n"
	       "                                ###### WELCOME TO FACTORIAL CALCULATOR ######\n"
	       "                                .................[BY Sidatt NH]..............\n\n"); 

	int number;
	printf("Enter a number: ");
	scanf("%d",&number); 
	int i;
	unsigned int fact = number;
    for (i = number-1;i >= 1 ;i--)
	{    
      
	  
	  fact=fact*i;   
	   
  	}    
  
	printf("The Factorial of %d is: %d\n\n",number,fact);   
	
	printf("                                .............................................\n"
	       "                                ### WE ARE HAPPY WE HELPED YOU. GOOD BYE. ###\n"
	       "                                .............................................\n\n"); 
	
	int m;
	printf("1). Calculate another factorial.\n2). Quit program.\nPlease choose an option: ");
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
