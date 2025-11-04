/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que consulta um unico usuario
*/

#include "funcoes.h"
void consultaUsuaUnico(TipoLista_usua *L){

    TipoApontador_usua p;
    int resp;

    if (L->primeiro == NULL)
    {
        gotoxy(8, 23);
        printf("Nenhum usuario cadastrado.       ");
        getch();
        return;
    }

    p = L->primeiro;
    do
    {
        tela();
        tela_usuarios();
        gotoxy(20, 3);
        printf("CONSULTAR USUARIO");

        gotoxy(38, 7);
        printf("%d", p->conteudos.matricula);
        gotoxy(38, 8);
        printf("%s", p->conteudos.nome);
        gotoxy(38, 9);
        printf("%s", p->conteudos.endereco);
        gotoxy(38, 10);
        printf("%s", p->conteudos.telefone);
        gotoxy(38, 11);
        printf("%s", p->conteudos.email);
        gotoxy(38, 12);
        printf("%s", p->conteudos.dt_nascimento);
        gotoxy(38, 13);
        printf("%s", p->conteudos.dt_cadastro);
        
        if(p->conteudos.status == 0){
            gotoxy(38,14);
            printf("ATIVO");
        }else {
            gotoxy(38,14);
            printf("INATIVO");
        }
    
        gotoxy(8, 23);
        printf("4-Voltar 6-Proximo 5-Sair: ");
        scanf("%d", &resp);

        if (resp == 4)
        {
            if (p->anterior != NULL)
            {
                p = p->anterior;
            }
            else
            {
                gotoxy(8, 23);
                printf("Esse e o primeiro usuario da Lista.");
                getch();
            }
        }
        else if (resp == 6)
        {
            if (p->proximo != NULL)
            {
                p = p->proximo;
            }
            else
            {
                gotoxy(8, 23);
                printf("Esse e o ultimo usuario da Lista.");
                getch();
            }
        }
    } while (resp != 5);
}