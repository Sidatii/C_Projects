#include<stdio.h>
#include<stdlib.h>



int main(){
int T[5];
int i,j, temp;

start:
printf("Veuillez saisir les elements du tableau: \n");

for(i=0; i<5;i++){
    printf("T[%d]:",i);
    scanf("%d", &T[i]);
}
temp = 0;

    for( i=0;i<=4;i++){
        for( j=0;j<5;j++){
            if(T[i]>T[j]){
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;}
        }
    }
    printf("Le tableau triee est:\n");
    for(i=0; i<5;i++)
    printf("%d\n",T[i]);

goto start;
return 0;
}
