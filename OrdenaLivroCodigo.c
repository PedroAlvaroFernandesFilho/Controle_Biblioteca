/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que ordena os livros por codigo
*/

#include "funcoes.h"
void ordenar_codigo_livro(tipolista_livro *L)
{
    tipoapontador_livro i, j;
    reg_livros aux;

    for (i = L->primeiro; i != NULL; i = i->proximo)
    {
        for (j = i->proximo; j != NULL; j = j->proximo)
        {
            if (i->conteudos.id_livro > j->conteudos.id_livro)
            {
                aux = i->conteudos;
                i->conteudos = j->conteudos;
                j->conteudos = aux;
            }
        }
    }
}