/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 05/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar livros em uma posicao da lista
*/

#include "funcoes.h"

void cadastroLivroPosicao(tipolista_livro *li, reg_livros Livros, int posicao){

    int i = 1;
    tipoapontador_livro p, q;

    if((li->primeiro == NULL) && (li->ultimo == NULL)){
        cadastroLivroinicio(li, Livros);
        return;
    }
    p = li->primeiro;

    while(p != NULL && i < posicao){
        p = p->proximo;
        i++;
    }

    if (p == NULL){
        gotoxy(8, 23);
        printf("Posicao maior que a ultima. Inserido no final.");
        getch();
        cadastroLivroFinal(li, Livros);
        return;
    }

    q = (tipoapontador_livro)malloc(sizeof(tipoitem_livros));

    q->conteudos = Livros;

    q->proximo = p;
    q->anterior = p->anterior;

    if (p->anterior != NULL){
        p->anterior->proximo = q;
    } else {
        li->primeiro = q;
    }

    p->anterior = q;
}