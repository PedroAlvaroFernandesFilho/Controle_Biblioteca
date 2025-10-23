/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar usuario em uma posicao da lista
*/

#include "funcoes.h"

void inserir_usua_posicao(TipoLista_usua *L, reg_usuario usuario, int posicao){

    int i = 1;
    TipoApontador_usua p, q;

    if((L->primeiro == NULL) && (L->ultimo == NULL)){
        inserir_usua_inicio(L, usuario);
        return;
    }
    p = L->primeiro;

    while(p != NULL && i < posicao){
        p = p->proximo;
        i++;
    }

    if (p == NULL){
        gotoxy(8, 23);
        printf("Posicao maior que a ultima. Inserido no final.");
        getch();
        inserir_usua_fim(L, usuario);
        return;
    }

    q = (TipoApontador_usua)malloc(sizeof(TipoItem_usua));

    q->conteudos = usuario;

    q->proximo = p;
    q->anterior = p->anterior;

    if (p->anterior != NULL){
        p->anterior->proximo = q;
    } else {
        L->primeiro = q;
    }

    p->anterior = q;
}