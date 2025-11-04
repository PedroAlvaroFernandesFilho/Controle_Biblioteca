/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que ordena os usuarios por ordem alfabetica
*/

#include "funcoes.h"

void ordenar_nome(TipoLista_usua *L)
{
    TipoApontador_usua i, j;
    reg_usuario aux;

    for (i = L->primeiro; i != NULL; i = i->proximo)
    {
        for (j = i->proximo; j != NULL; j = j->proximo)
        {
            if (strcmp(i->conteudos.nome, j->conteudos.nome) > 0)
            {
                aux = i->conteudos;
                i->conteudos = j->conteudos;
                j->conteudos = aux;
            }
        }
    }
}