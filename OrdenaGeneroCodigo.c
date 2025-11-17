/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que ordena os generos por codigo
*/

#include "funcoes.h"
void ordenar_codigo_genero(tipolista_genero *L)
{
    tipoapontador_genero i, j;
    reg_generos aux;

    for (i = L->primeiro; i != NULL; i = i->proximo)
    {
        for (j = i->proximo; j != NULL; j = j->proximo)
        {
            if (i->conteudos.id_genero > j->conteudos.id_genero)
            {
                aux = i->conteudos;
                i->conteudos = j->conteudos;
                j->conteudos = aux;
            }
        }
    }
}