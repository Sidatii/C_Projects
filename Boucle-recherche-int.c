#include<stdio.h>
#include<stdlib.h>



int main(){
int T[5];
int i,j, temp,n;

start:
printf("Veuillez saisir les elements du tableau: \n");

for(i=0; i<5;i++){
    printf("T[%d]:",i);
    scanf("%d", &T[i]);
}
printf("Veuillez saisir l'entier cherch�: ");
scanf("%d",&n);


temp = 0;

// Triage par ordre descendant:

    for( i=0;i<=4;i++){
        for( j=0;j<5;j++){
            if(T[i]>T[j]){
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;}
        }
    }
    printf("Le tableau triee par ordre descendant est:\n");
    for(i=0; i<5;i++)
    printf("%d\n",T[i]);

 // Triage par ordre descendant:

    for( i=0;i<=4;i++){
        for( j=0;j<5;j++){
            if(T[i]<T[j]){
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;}
        }
    }
    printf("Le tableau triee par ordre ascendant est:\n");
    for(i=0; i<5;i++)
    printf("%d\n",T[i]);

//La recherche de l'entier donn�e:

        temp = 0;
        for( i=0;i<=4;i++){
            if(n == T[i])
               temp++;
        }
                printf("L entier se trouve dans le tableau %d fois\n",temp);

goto start;
return 0;
}
