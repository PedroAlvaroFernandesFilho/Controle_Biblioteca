/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 05/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar livros no começo da lista
*/

#include "funcoes.h"

void cadastroLivroinicio(tipolista_livro *L, reg_livros Livros){
    
    tipoapontador_livro p;
    p = (tipoapontador_livro)malloc(sizeof(tipoitem_livros));
    p->conteudos = Livros;
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