#include <stdio.h>


typedef struct{

int num;
char pref;
char ville;
int tel;

}contact;

typedef struct{

char nom[14];
char prenom[14];
contact co;


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
    printf("Veuillez inserer le num de la rue:");
    scanf("%d",&s[i].co.num);
    printf("Veuillez inserer la prefecture: ");
    scanf("%s",&s[i].co.pref);
    printf("Veuillez inserer la ville: ");
    scanf("%s",&s[i].co.ville);
    printf("Veuillez inserer le num tele: ");
    scanf("%d",&s[i].co.tel);
 }

//Affichage
    printf("Les infos de l'etudiant insere sont : \n\n");
    //printf("NOM\tPRENOM\tNOTES\tMOYENNE\n");
for(i=0; i<n; i++) {

    printf("%s \t %s \t %d \t %s \t %s \t %d \n",s[i].nom,s[i].prenom,s[i].co.num,s[i].co.pref,s[i].co.ville,s[i].co.tel);
}




return 0;

}
