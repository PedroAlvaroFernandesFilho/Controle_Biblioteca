/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a funcao de pesquisa de codigo para evitar duplicatas de registros e utilizar para outras funcoes
*/

#include "funcoes.h"
tipoapontador_genero pesquisa_genero(tipolista_genero *L, int id_genero){
    
    tipoapontador_genero p;
    p = L->primeiro;
    while (p != NULL)
    {

        if (p->conteudos.id_genero == id_genero)    
        {
            return p;
        }
        p = p->proximo;
    }
    return p;
}