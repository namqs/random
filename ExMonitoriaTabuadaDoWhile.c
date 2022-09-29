#include <stdio.h>
void main ()
{
    int i=1, N, j=0, result;
    
        printf("Digite o valor de N: ");
        scanf("%d", &N);
        
           do 
           {
             printf("\n\n");
              j=0;  
                do
                {
                 result = i*j;
                 printf("%d*%d=%d  \n", i, j, result);
                 j++;
                } while (j<=9);
                  
            i++;
           } while (i<=N);
           
        
}
