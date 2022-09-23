#include <stdio.h>
#include <stdlib.h>

int main() {

	int status;
	char fName[15],sName[20], message[1000], check[100];

	printf("Hello there! \n This is a space to share your ideas and feedback with the school community.\nIn order to know where the insights are coming from, you need to provide some information about you in advance, namely your status and full name.\n Here are some info that can help you know your status code. \n\n");
	printf("If you are a student, please use ID = 1. \n If you are a teacher, please use ID = 2 \n If you are a parent, please use ID = 3 \n If you are an administator, please use ID = 4 \n\n");


	printf("Please enter your status ID: ");
		start:

	fgets(check, 100, stdin);
	
	
	while ((status < 1 && status >= 5) &&  (sscanf(check, "%d", &status)==1)){

		printf("Invalid input!!! \nPlease enter a valid number: ");
		scanf("%d", &status);
		}
		
		if(sscanf(check, "%d", &status)!=1)
		{
			printf("Invalid input!!! \nPlease enter a valid number: ");
			
			goto start;

		}
		




	//goto start;

	
	switch(status) {
	
	case 1:
	printf("Welcome dear Student... \n\n ");
	printf("Please enter your first name:  ");
	scanf("%s", &fName);
	printf("\n\nPlease enter your second name: ");
	scanf("%s", &sName);
	printf("\n\nWelcome %s %s \n\n", fName, sName);
	break;
	
	case 2:
	printf("Welcome dear Teacher... \n\n ");
	printf("Please enter your first name:  ");
	scanf("%s", &fName);
	printf("\n\nPlease enter your second name: ");
	scanf("%s", &sName);
	printf("\n\nWelcome %s %s \n\n", fName, sName);
	break;

	case 3:
	printf("Welcome dear Parent... \n\n ");
	printf("Please enter your first name:  ");
	scanf("%s", &fName);
	printf("\n\nPlease enter your second name: ");
	scanf("%s", &sName);
	printf("\n\nWelcome %s %s \n\n", fName, sName);
	break;

	case 4:
	printf("Welcome dear Administrator... \n\n ");
	printf("Please enter your first name:  ");
	scanf("%s", &fName);
	printf("\n\nPlease enter your second name: ");
	scanf("%s", &sName);
	printf("\n\nWelcome %s %s \n\n", fName, sName);
	break;

	case 5:
	printf("\n\nWelcome dear Guest... \n\n Sorry!! Unfortunately you can not use this space. \n\n GOOD BYE.");
	goto end;
	
	}

	printf("Please write your message to the community: \n");
	getchar();
	fgets(message, 1000, stdin);
	printf("\n\nYour message was successfully shared with the community... \n\n");
	printf("Your message will be shown as follows: \n\n");
	puts(message);
	printf("\n  %s %s \n\n ", fName, sName);
       	printf("Thank you for sharing your ideas with the community  \n\n");
	printf("SEE YOU SOON %s %s ...\n ",fName, sName );	

end:
	return 0;

}

