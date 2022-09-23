#include<stdio.h>
#include<stdlib.h>


int main(){


    float montant, interet, epargne;
    int temp,i,j, duree;

        printf("[Bienvenues au calculator d epargne chez SIDATT BANK]\n");
        for(i=0; i<110;i++){
            for(j=0; j<=1;j++)
                if(j ==1 || i == 1)
                printf("#");
        }

        printf("\nVeuillez saisir le montant que vous veullez deposez (en DH): ");
        scanf("%f", &montant);
        for(i=0; i<110;i++){
            for(j=0; j<=1;j++)
                if(j ==1 || i == 1)
                printf("#");
        }
        printf("Veuillez saisir la duree d epargne (en annee): ");
        scanf("%d", &duree);
        for(i=0; i<110;i++){
            for(j=0; j<=1;j++)
                if(j ==1 || i == 1)
                printf("#");
        }
        printf("Le taux appliquee sur votre eparne est 2 pourcent\n ");
        for(i=0; i<110;i++){
            for(j=0; j<=1;j++)
                if(j ==1 || i == 1)
                printf("#");
        }

        float M[duree], I[duree];

        interet = 0.02;
        epargne = montant;
        for(i=0; i<duree; i++){
        epargne = epargne*(1+interet);
        M[i]= epargne;
        I[i]= epargne - epargne/(1+interet);
        }
        printf("Votre tableau d accummulation de capital sur %d ans est: \n",duree);
        for(i=0; i<duree; i++){
            printf("Annee %d: %.2f\n",i+1,M[i]);
            }

        printf("Votre gain annuel sur le capital est: \n");
        for(i=0; i<duree; i++)
            printf("Annee %d: %.2f\n",i+1,I[i]);





return 0;
}
