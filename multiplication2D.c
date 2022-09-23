#include <stdio.h>

int main()
{
    int T[11][10] = {{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10}};

    int i,j;
    for(i = 1; i <= 11; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            T[i][j] = i * j;
        }
    }

    for(i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j++){
            printf("%d x %d = %d\n",i,j,T[i][j]);
        }
        printf("\n");
    }


    return 0;
}
