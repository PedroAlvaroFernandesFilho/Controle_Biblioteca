/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 05/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Cadastrar livros no começo da lista
*/

#include "funcoes.h"

void cadastroLivroFinal(tipolista_livro *L, reg_livros Livros){

    tipoapontador_livro p;
    p = (tipoapontador_livro)malloc(sizeof(tipoitem_livros));
    p->conteudos = Livros;
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