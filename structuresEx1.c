#include <stdio.h>


typedef struct{

int jour;
int mois;
int annee;

}datnaiss;

typedef struct{

char nom[14];
char prenom[14];
datnaiss date;

}Stagiaire;

int main () {
Stagiaire s[100];
int i, n;


printf("Veuillez inserer le nombre des stagiaire a ajouter: ");
scanf("%d", &n);
 for (i=0; i<n; i++){
    printf("\nVeuillez inserer les infos du stagiaire n %d: \n", i+1);
    printf("Veuillez inserer le nom: ");
    scanf("%s",&s[i].nom);
    printf("Veuillez inserer le prenom: ");
    scanf("%s",&s[i].prenom);
    printf("Veuillez inserer la date de naissance: \n");
    printf("Veuillez inserer la jour: ");
    scanf("%d",&s[i].date.jour);
    printf("Veuillez inserer la mois: ");
    scanf("%d",&s[i].date.mois);
    printf("Veuillez inserer l annee: ");
    scanf("%d",&s[i].date.annee);
 }

//Affichage
    printf("Les Stagiaires inseres sont : \n\n");
    printf("NOM \t PRENOM \t DATE DE NAISSANCE\n");
for(i=0; i<n; i++) {

    printf("%s \t %s \t %d/%d/%d \n",s[i].nom,s[i].prenom,s[i].date.jour,s[i].date.mois,s[i].date.annee);
}




return 0;

}
