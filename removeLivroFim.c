/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 15/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Remover livro no fim da lista
*/

#include "funcoes.h"

void removeLivroFim(tipolista_livro *li){

    tipoapontador_livro p;

    p = li->ultimo;

    if (li->primeiro == li->ultimo)
    {
        li->primeiro = NULL;
        li->ultimo = NULL;
    }
    else
    {
        li->ultimo = li->ultimo->anterior;
        li->ultimo->proximo = NULL;
    }
    free(p);

    gotoxy(8, 23);
    printf("Livro removido com sucesso.");
    getch();
}
