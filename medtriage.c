#include<stdio.h>
#include<stdlib.h>


int main(){

int t[6];
    printf("les valeures : \n");
    for(int j=0;j<6;j++){
        scanf("%d",&t[j]);
    }
    int boite = 0;
    for(int i=0;i<5;i++){
        for(int j=1;j<6;j++){
            if(t[i]>t[j]){
                boite=t[i];
                t[i]=t[j];
                t[j]=boite;
            }
        }
    }
    printf("le tableau triée : \n");
    for(int k=0;k<6;k++){
        printf("%d \n",t[k]);
    }
    return 0;
    }
