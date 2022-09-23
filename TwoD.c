#include<stdio.h>
#include<stdlib.h>



int main(){
int i, j;
int l,c;
c = 3;
l = 3;
int T[l][c];
start:


    for (i=0; i<c; i++){

            for(j = 0; j<l; j++){
            printf("Saiser X%d%d:",i+1,j+1);
            scanf("%d", &T[i][j]);


            }
    }
    for (i=0; i<c; i++){

            for (j=0;j<l;j++)
                printf("%d   ",T[i][j]);
            printf("\n");
            }
goto start;
return 0;
}
