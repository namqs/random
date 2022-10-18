/*Desenvolver um programa que permaneça lendo
valores inteiros até que os números 10, 20 e 30 tenham
sido informados, nesta ordem (com a possibilidade de
outros valores serem fornecidos entre um e outro).
Ao final, exibir:
- Total de valores fornecidos pelo usuário; (incluindo 10, 20 e 30?)
- Maior número fornecido entre a ocorrência do 10 e
do 20;
- Média de todos os elementos pares lidos antes da
ocorrência do 10.
*/

#include <stdio.h>
void main ()
{
  int cont1, contpares=0, cont2, cont3, total, maior=0, soma=0, n;
  float media;

    cont1=0;
    do
    {
      printf("Digite um numero: ");
      scanf("%d", &n);

      if ((n%2==0) && (n!=10)) //guardando valores pares na soma, pra dividir pelo numero do contpares
      {
        soma = soma + n;
        contpares++;
      }
      cont1++;
    } while (n!=10);

    cont2=0;
    do
    {
      printf("Ok, Digite um numero: ");
      scanf("%d", &n);

        if ((n>= maior) && (n!=20))
        {
          maior = n;
        }

      cont2++;
    } while (n!=20);

    cont3=0;
    do
    {
      printf("Ok, Digite um numero: ");
      scanf("%d", &n);
      cont3++;
    } while (n!=30);

  media = soma / contpares; //media de todos os numeros pares lidos antes de 10
  total = cont1+cont2+cont3;

  printf("Total de numeros digitados: %d", total);
  printf("\nMaior numero entre 10 e 20: %d", maior);
  printf("\nMedia de todos os numeros pares lidos antes de 10: %.f", media);
}
