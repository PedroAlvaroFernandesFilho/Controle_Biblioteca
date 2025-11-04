/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que chama as ordenações e o menu geral
*/

#include "funcoes.h"
void consultar_lista(TipoLista_usua *L, int opc)
{
    int i;
    TipoApontador_usua p;
    if (L->primeiro == NULL)
    {
        gotoxy(8, 23);
        printf("Nenhum usuario cadastrado.");
        getch();
    }
    if (opc == 2)
    {
        ordenar_codigo(L);
        gotoxy(20, 03);
        printf("LISTA DE USUARIOS - ORDENADA POR CODIGO");
    }
    else if(opc == 3)
    {
        ordenar_nome(L);
        gotoxy(20, 03);
        printf("LISTA DE USUARIOS - ORDENADA POR NOME");
    }
    else if(opc == 4)
    {
        ordenar_salario(L);
        gotoxy(20,03);
        printf("CONSULTA USUARIOS DA LISTA UNICAMENTE");
    }

    tela();
    gotoxy(2, 5);
    printf("MT  Nome                        telefone         Dt nascimento | Dt cadastro ");
    gotoxy(2, 6);
    printf("--  --------------------------  ---------------  ------------  | ------------");

    p = L->primeiro;
    for (i = 7; p != NULL; i++)
    {
        {
            gotoxy(2, i);
            printf("%d", p->conteudos.matricula);
            gotoxy(6, i);
            printf("%s", p->conteudos.nome);
            gotoxy(34, i);
            printf("%s", p->conteudos.telefone);
            gotoxy(56, i);
            printf("%s", p->conteudos.dt_nascimento);
            gotoxy(70, i);
            printf("%.2f", p->conteudos.dt_cadastro);

            p = p->proximo;
        }
    }
    getch();
}