#include <stdio.h>


int main (){


    int T1[] = {1,2,3,4,5,6,7,8,9,10};
    int T2[] = {1,2,3,4,5,6,7,8,9,10};

    int i,j,k;
    int n=10;


              /* for(i=0; i<10; i++)
                printf("%d * %d = %d \n", T1[i],j,T3[i]);*/


   for(i=0; i<10; i++) {
    printf("Le tableau de multiplication de %d est: \n", i+1);
            for(j=0; j<10; j++)
                printf("%d * %d = %d \n", T1[i],j,T1[i]*j);
            }





return 0;

}

