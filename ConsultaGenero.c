/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que chama as ordenações e o menu geral
*/

#include "funcoes.h"
void consultar_lista_genero(tipolista_genero *L, int opc)
{
    int i;
    int linha;
    tipoapontador_genero p;
    if (L->primeiro == NULL)
    {
        gotoxy(8, 23);
        printf("Nenhum genero cadastrado.");
        getch();
    }
    if (opc == 2)
    {
        ordenar_codigo_genero(L);
        gotoxy(20, 03);
        printf("LISTA DE GENERO - ORDENADA POR CODIGO");
    }
    else if(opc == 3)
    {
        ordenar_nome_genero(L);
        gotoxy(20, 03);
        printf("LISTA DE GENERO - ORDENADA POR NOME");
    }

    tela();
    gotoxy(2, 5);
    printf("ID  Nome|Descricao              Status                                       ");
    gotoxy(2, 6);
    printf("--  --------------------------  ---------------                              ");

    p = L->primeiro;
    for (i = 7; p != NULL; i++)
    {
        {
            gotoxy(2, i);
            printf("%d", p->conteudos.id_genero);
            gotoxy(6, i);
            printf("%s", p->conteudos.ds_genero);
            gotoxy(34, i);
            printf("%d", p->conteudos.status);
            if(p->conteudos.status == 0){
                gotoxy(36,i);
                printf("= Ativo");
            }else if(p->conteudos.status == 1){
                gotoxy(36,i);
                printf("= Inativo");
            }else {
                gotoxy(05,23);
                printf("Status invalido!");
            }

            p = p->proximo;
        }
    }
    getch();
}