#include<stdio.h>
#include<stdlib.h>



int main(){
int T[5];
int i, min;
start:
printf("Veuillez saisir les elements du tableau: \n");

for(i=0; i<5;i++){
    printf("T[%d]:",i);
    scanf("%d", &T[i]);
}
min = T[0];
    for(i=0;i<5;i++){
        if(min>T[i])
        min = T[i];
}
    printf("le min est: %d\n",min);

goto start;
return 0;
}
