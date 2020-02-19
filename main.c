#include <stdio.h>
#include <stdlib.h>

int pushPilha(int *pilha) {

int i=0;

do
{
    if (i>=5) {
        printf("Stack Overflow JP PJL");
        break;
    }
    if (pilha[i] = "")
    {
        printf("Digite um inteiro para a posicao [%d]: ", i);
        scanf("%d", &pilha[i]);
    } else
    printf("Posição preenchida");
    i++;

} while (i<=5);

return 0;

}

int popPilha(int *pilha) {

int i = 4;
int sn;


do
{
    if (i<=-1) {
        printf("\nPilha vazia");
        break;
    }

      printf("\nVoce deseja esvaziar a proxima posicao da pilha[%d]? 1 para sim ou 2 para nao ", i);
      scanf("%d", &sn);
      if (sn == 2 && pilha[i] != "") {
        printf("\npilha[%d] = %d", i, pilha[i]);
      } else if (sn == 1 && pilha[i] != "") {
            pilha[i] = 0;
            printf("\npilha[%d] = 0", i);
             }

             i--;




 } while (i>=-1);




}



int main()



{
    int pilha[5];
    int i=0;

pushPilha(pilha);
printf("\n");
popPilha(pilha);



}
