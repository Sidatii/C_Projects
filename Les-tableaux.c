#include<stdio.h>
#include<stdlib.h>



int main(){

	float  T[10];
	int i;
	float Somme,Produit,Moyenne;


	for(i = 0; i<=9; i++){
        printf("Veuillez saisir la valeur n %d:",i+1);
        scanf("%f", &T[i]);
}
    Somme = 0;
    Produit = 1;
    for(i = 0; i<=9; i++){
        Somme =Somme + T[i];
        Produit = Produit*T[i];
    }
    Moyenne =Somme/10;
    printf("La somme est: %.2f\n", Somme);
    printf("Le produit est: %.2f\n", Produit);
    printf("La moyenne est: %.2f\n", Moyenne);


	return 0;

}
