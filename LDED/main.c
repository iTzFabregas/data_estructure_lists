#include <stdio.h>
#include <stdlib.h>

#include "LDED.h"

int main()
{
    Elem  *el;
    Lista *li = cria_lista();

    printf("Tamanho: %d\n\n\n\n",tamanho_lista(li));

    int i;
    for(i=0; i < 5; i++)
        insere_lista_ordenada(li,rand() % 100);

    imprime_lista(li);
    printf("\n\n\n\n Tamanho: %d\n",tamanho_lista(li));


    //remove_lista(li,3);
    for(i=0; i < 5; i++){
        remove_lista_final(li);
        imprime_lista(li);
        printf("\nTamanho: %d\n\n\n\n",tamanho_lista(li));
    }

    for(i=0; i < 10; i++)
        insere_lista_inicio(li,i);

    imprime_lista(li);

    if (consulta_lista_dado(li,5,&el))
        printf("Achou (5) => Ant: %p - Dado: %p Prox: %p \n",el->ant,el,el->prox);
    else
        printf("Nao Achou! \n");

    libera_lista(li);
    system("pause");
    return 0;
}

