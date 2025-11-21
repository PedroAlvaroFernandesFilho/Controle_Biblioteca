/*
Autor....: Pedro Alvaro Fernandes Filho     
Data.....: 15/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Remover livro em uma posicao da lista
*/

#include "funcoes.h"

void removeLivroPosicao(tipolista_livro *li){

    tipoapontador_livro p;
    int posicao;
    int i = 1;

    if (li->primeiro == NULL)
    {
        gotoxy(8, 23);
        printf("Lista vazia. Nenhum livro para remover.");
        getch();
        return;
    }

    gotoxy(8, 23);
    printf("Qual posicao deseja excluir: ");
    scanf("%d", &posicao);

    p = li->primeiro;

    while (p != NULL && i < posicao)
    {
        p = p->proximo;
        i++;
    }

    if (p == NULL)
    {
        gotoxy(8, 23);
        printf("Posicao invalida. Livro nao encontrado.");
        getch();
        return;
    }
    if (p == li->primeiro)
    {
        removeLivroInicio(li);
    }
    else if (p == li->ultimo)
    {
        removeLivroFim(li);
    }
    else
    {
        p->anterior->proximo = p->proximo;
        p->proximo->anterior = p->anterior;
        free(p);

        gotoxy(8, 23);
        printf("Livro removido com sucesso.                   ");
        getch();
    }
}
