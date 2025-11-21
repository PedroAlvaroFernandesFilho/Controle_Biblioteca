/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar genero no fim da lista
*/

#include "funcoes.h"

void cadastroGeneroFinal(tipolista_genero *g, reg_generos genero){

    tipoapontador_genero p;
    p = (tipoapontador_genero)malloc(sizeof(tipoitem_genero));
    p->conteudos = genero;
    p->proximo = NULL;
    p->anterior = g->ultimo;

    if (g->ultimo != NULL)
    {
        g->ultimo->proximo = p;
    }
    else
    {
        g->primeiro = p;
    }

    g->ultimo = p;
}
