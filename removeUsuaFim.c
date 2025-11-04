/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 03/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a funcao que remove usuario no fim da lista
*/

#include "funcoes.h"

void removeUsuaFim(TipoLista_usua *L){

    TipoApontador_usua p;

    p = L->ultimo;

    if (L->primeiro == L->ultimo)
    {
        L->primeiro = NULL;
        L->ultimo = NULL;
    }
    else
    {
        L->ultimo = L->ultimo->anterior;
        L->ultimo->proximo = NULL;
    }
    free(p);

    gotoxy(8, 23);
    printf("Usuario removido com sucesso.");
    getch();
}