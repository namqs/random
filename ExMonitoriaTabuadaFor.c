/*
- objetivo: exibir todas as tabuadas ate chegar à tabuada do N...
- solicitar o N
- se o N for maior q 1, exiba a tabuada 



*/
#include <stdio.h>
void main ()
{
    int i, N, j, result;
    
        printf("Digite o valor de N: ");
        scanf("%d", &N);
        
        for (i=1; i<=N; i++)
        {
            printf("\n\n");
            for (j=0; j<=9; j++)
              {  result = i*j;
                 printf("%d*%d=%d  \n", i, j, result);
              }
        }
}
