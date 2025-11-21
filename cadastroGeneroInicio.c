/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar genero no inicio da lista
*/

#include "funcoes.h"

void cadastroGeneroInicio(tipolista_genero *g, reg_generos genero){

    tipoapontador_genero p;
    p = (tipoapontador_genero)malloc(sizeof(tipoitem_genero));
    p->conteudos = genero;
    p->proximo = g->primeiro;
    p->anterior = NULL;

    if (g->primeiro != NULL)
    {
        g->primeiro->anterior = p;
    }
    else
    {
        g->ultimo = p;
    }

    g->primeiro = p;
}
