/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 18/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que ordena os livros por ordem alfabetica
*/

#include "funcoes.h"

void ordenar_nome_livro(tipolista_livro *li)
{
    tipoapontador_livro i, j;
    reg_livros aux;

    for (i = li->primeiro; i != NULL; i = i->proximo)
    {
        for (j = i->proximo; j != NULL; j = j->proximo)
        {
            if (strcmp(i->conteudos.titulo, j->conteudos.titulo) > 0)
            {
                aux = i->conteudos;
                i->conteudos = j->conteudos;
                j->conteudos = aux;
            }
        }
    }
}