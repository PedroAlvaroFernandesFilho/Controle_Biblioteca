/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 03/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a funcao que remove usuario na posicao
*/

#include "funcoes.h"
void removeUsuaPosicao(TipoLista_usua *L){

    TipoApontador_usua p;
    int posicao;
    int i = 1;

    if (L->primeiro == NULL)
    {
        gotoxy(8, 23);
        printf("Lista vazia. Nenhum Usuario para remover.");
        getch();
        return;
    }

    gotoxy(8, 23);
    printf("Qual posicao deseja excluir: ");
    scanf("%d", &posicao);

    p = L->primeiro;

    while (p != NULL && i < posicao)
    {
        p = p->proximo;
        i++;
    }

    if (p == NULL)
    {
        gotoxy(8, 23);
        printf("Posicao invalida. Usuario nao encontrado.");
        getch();
        return;
    }
    if (p == L->primeiro)
    {
        removeUsuaInicio(L);
    }
    else if (p == L->ultimo)
    {
        removeUsuaFim(L);
    }
    else
    {
        p->anterior->proximo = p->proximo;
        p->proximo->anterior = p->anterior;
        free(p);

        gotoxy(8, 23);
        printf("Usuario removido com sucesso.                   ");
        getch();
    }
}