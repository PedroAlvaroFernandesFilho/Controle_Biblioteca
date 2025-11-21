/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 15/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Remover livro no inicio da lista
*/

#include "funcoes.h"

void removeLivroInicio(tipolista_livro *li){

    tipoapontador_livro p;

    p = li->primeiro;

    if (li->primeiro == li->ultimo)
    {
        li->primeiro = NULL;
        li->ultimo = NULL;
    }
    else
    {
        li->primeiro = li->primeiro->proximo;
        li->primeiro->anterior = NULL;
    }
    free(p);

    gotoxy(8, 23);
    printf("Livro removido com sucesso.");
    getch();
}