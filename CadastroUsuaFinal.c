/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar usuario no final da lista
*/

#include "funcoes.h"
void inserir_usua_fim(TipoLista_usua *L, reg_usuario usuario){

    TipoApontador_usua p;
    p = (TipoApontador_usua)malloc(sizeof(TipoItem_usua));
    p->conteudos = usuario;
    p->proximo = NULL;
    p->anterior = L->ultimo;
    if (L->ultimo != NULL)
    {
        L->ultimo->proximo = p;
    }
    else
    {
        L->primeiro = p;
    }
    L->ultimo = p;

}