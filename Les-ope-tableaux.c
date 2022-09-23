#include<stdio.h>
#include<stdlib.h>



int main(){

	float  T1[3],T2[3];
	int i;
	float Produit_scalaire;
	Produit_scalaire = 0;

	for(i = 0; i<=2; i++){
        printf("Veuillez saisir la valeur n %d, Tab1:",i+1);
        scanf("%f", &T1[i]);
        printf("Veuillez saisir la valeur n %d, Tab2:",i+1);
        scanf("%f", &T2[i]);
}

    for(i = 0; i<=2; i++){
        Produit_scalaire =Produit_scalaire + T1[i]*T2[i];
    }
    printf("Le produit scalaire de ces deux vecteur est: %.2f\n", Produit_scalaire);


	return 0;

}
