#include<stdio.h>
#include<stdlib.h>
int somme( int a,int b)
{

    int result=a+b;
    printf("%d+%d=%d",a, b, result);
}

int main ()
{
    int a,b;
    printf("Entrez le premier nombre: \n",a);
    scanf("\n%d",&a);
    printf("Entrez le deuxiéme nombre: \n",b);
    scanf("\n%d",&b);
    somme(a,b);
    return 0;
}
