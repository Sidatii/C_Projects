#include<stdio.h>
#include<stdlib.h>



int main(){
int T[5];
int i, max;
start:
printf("Veuillez saisir les elements du tableau: \n");

for(i=0; i<5;i++){
    printf("T[%d]:",i);
    scanf("%d", &T[i]);
}
max = T[0];
    for(i=0;i<5;i++){
        if(max<T[i])
        max = T[i];
}
    printf("Le max est: %d\n",max);

goto start;
return 0;
}
