

int main () {
int n, i;
printf("saisez la taile du tableau: ");
scanf("%d", &n);
printf("saisez les valeurs du tableau: \n");
int t[n];
for(i=0; i<n; i++){
printf("t[%d]: ", i+1);
scanf("%d",&t[i]);
}
printf("Le tableau saisie s'affiche comme suit:\n", t[i]);
for(i=0; i<n; i++)
    printf("t[%d]: %d\n", i+1, t[i]);


    int nbr;
    int index;
    int swap;
    printf("saisir un nombre : ");
    scanf("%d",&nbr);
    printf("saisir un index : ");
    scanf("%d",&index);
    for(int i=n+1;i>index;i--){
        swap=t[i];
        t[i]=t[i-1];
        t[i-1]=swap;
    }
    t[index]=nbr;

    for(int i=0;i<n+1;i++){
        printf("%d \n",t[i]);
    }
}
