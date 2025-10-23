/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar usuario no começo da lista
*/

#include "funcoes.h"
void inserir_usua_inicio(TipoLista_usua *L, reg_usuario usuario){

    TipoApontador_usua p;
    p = (TipoApontador_usua)malloc(sizeof(TipoItem_usua));
    p->conteudos = usuario;
    p->proximo = L->primeiro;
    p->anterior = NULL;
    if (L->primeiro != NULL)
    {
        L->primeiro->anterior = p;
    }
    else
    {
        L->ultimo = p;
    }
    L->primeiro = p;
}