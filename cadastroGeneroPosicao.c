/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar genero em uma posicao da lista
*/

#include "funcoes.h"

void cadastroGeneroPosicao(tipolista_genero *L, reg_generos genero, int posicao){

    int i = 1;
    tipoapontador_genero p, q;

    if ((L->primeiro == NULL) && (L->ultimo == NULL))
    {
        cadastroGeneroInicio(L, genero);
        return;
    }

    p = L->primeiro;

    while (p != NULL && i < posicao)
    {
        p = p->proximo;
        i++;
    }

    if (p == NULL)
    {
        gotoxy(8, 23);
        printf("Posicao maior que a ultima. Inserido no final.");
        getch();
        cadastroGeneroFinal(L, genero);
        return;
    }

    q = (tipoapontador_genero)malloc(sizeof(tipoitem_genero));
    q->conteudos = genero;
    q->proximo = p;
    q->anterior = p->anterior;

    if (p->anterior != NULL)
    {
        p->anterior->proximo = q;
    }
    else
    {
        L->primeiro = q;
    }

    p->anterior = q;
}
