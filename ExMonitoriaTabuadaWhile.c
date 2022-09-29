#include <stdio.h>
void main ()
{
    int i, N, j, result;
    
        printf("Digite o valor de N: ");
        scanf("%d", &N);
        
            i=1;
            while (i<=N)
            {
                printf("\n\n");
                
                j=0;
                while (j<=9)
                {
                     result = i*j;
                 printf("%d*%d=%d  \n", i, j, result);
                 j++;
                }
                i++;
            }
        
}
