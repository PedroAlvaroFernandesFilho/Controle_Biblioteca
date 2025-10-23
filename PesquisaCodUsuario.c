/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 15/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a funcao de pesquisa de codigo para evitar duplicatas de registros e utilizar para outras funcoes
*/

#include "funcoes.h"
TipoApontador_usua pesquisa(TipoLista_usua *L, int matricula){
    
    TipoApontador_usua p;
    p = L->primeiro;
    while (p != NULL)
    {

        if (p->conteudos.matricula == matricula)
        {
            return p;
        }
        p = p->proximo;
    }
    return p;
}