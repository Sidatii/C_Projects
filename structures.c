#include <stdio.h>


typedef struct{

float note1;
float note2;
float note3;
float m;

}moyenne;

typedef struct{

char nom[14];
char prenom[14];
moyenne mo;

}Etudiants;

int main () {
Etudiants s[100];
int i, n;


printf("Veuillez inserer le nombre des Etudiants a ajouter: ");
scanf("%d", &n);
 for (i=0; i<n; i++){
    printf("\nVeuillez inserer les infos du Etudiants n %d: \n", i+1);
    printf("Veuillez inserer le nom: ");
    scanf("%s",&s[i].nom);
    printf("Veuillez inserer le prenom: ");
    scanf("%s",&s[i].prenom);
    printf("Veuillez inserer les note: \n");
    printf("Veuillez inserer la note 1: ");
    scanf("%f",&s[i].mo.note1);
    printf("Veuillez inserer la note 2: ");
    scanf("%f",&s[i].mo.note2);
    printf("Veuillez inserer la note 3: ");
    scanf("%f",&s[i].mo.note3);
 }
for(i=0; i<n;i++){
s[i].mo.m = (s[i].mo.note1+s[i].mo.note2+s[i].mo.note3)/3;
}

//Affichage
    printf("Les Stagiaires inseres sont : \n\n");
    printf("NOM\tPRENOM\tNOTES\tMOYENNE\n");
for(i=0; i<n; i++) {

    printf("%s \t %s \t %.2f %.2f %.2f \t %.2f \n",s[i].nom,s[i].prenom,s[i].mo.note1,s[i].mo.note2,s[i].mo.note3,s[i].mo.m);
}




return 0;

}
