#include<stdio.h>
#include<stdlib.h>



int main(){

	int  c, l, i, j;
start:
	scanf("%d", &c);
	scanf("%d", &l);
		for (j=1; j<=l; j++){
			for(i=1; i<=c; i++){
            if (j==1 || j==l/2 || i==1 || i==c || i == j || i == 2*j || j == 2*i || i == (j*2)+j || j==(i*2)+i)
				printf("* ");
            else
                printf("  ");
			}
                printf("\n");

		}
goto start;
	return 0;

}

