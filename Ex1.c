/* Desenvolver três programas (um para cada estrutura
de repetição estudada) que, dado um número inteiro
N, apresente uma sequência de escritas que forme um
triângulo, conforme ilustrado nos exemplos abaixo:
Exemplo 1:
N = 4
1       n-3
1 2     //n-2
1 2 3   //printf n-1
1 2 3 4 //printf n

*/

#include <stdio.h>
void main ()
{
  int n, i, j;

    printf("Digite o numero: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
      for (j=1;j<=i;j++)
		 {
			printf ("%d ", j);
		 }
      printf("\n");
    }
}
