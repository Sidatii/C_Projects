#include <stdio.h>


typedef struct{

int jour;
int mois;
int annee;

}datenaiss;

typedef struct{

char nom[14];
char prenom[14];
datenaiss date;


}Etudiants;

int main () {
Etudiants s[100];
int i,j, n;


printf("Veuillez inserer le nombre des Etudiants a ajouter: ");
scanf("%d", &n);
 for (i=0; i<n; i++){
    printf("\nVeuillez inserer les infos du Etudiants n %d: \n", i+1);
    printf("Veuillez inserer le nom: ");
    scanf("%s",&s[i].nom);
    printf("Veuillez inserer le prenom: ");
    scanf("%s",&s[i].prenom);
    printf("Veuillez inserer la date de naissance: \n");
    printf("Veuillez inserer le jour:");
    scanf("%d",&s[i].date.jour);
    printf("Veuillez inserer le mois: ");
    scanf("%d",&s[i].date.mois);
    printf("Veuillez inserer l annee: ");
    scanf("%d",&s[i].date.annee);}

//tri a bulle
 for (i=0; i<n-1; i++){
    for(j=1; j<n; j++){
        if(s[j].date.annee <s[i].date.annee){
            int temp = s[j].date.annee;
            s[j].date.annee = s[i].date.annee;
            s[i].date.annee = temp;
        }

    }


 }



//Affichage
    printf("Les infos de l'etudiant insere sont : \n\n");
    for(i=0; i<n; i++) {

        printf(" LES INFOS %s \t %s \t %d/%d/%d\n",s[i].nom,s[i].prenom,s[i].date.jour,s[i].date.mois,s[i].date.annee);
    }




return 0;

}
