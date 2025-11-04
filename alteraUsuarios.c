/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 03/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a funcao que altera usuario
*/

#include "funcoes.h"

void altera_usuario(TipoLista_usua *L, reg_usuario *usuario){

    TipoApontador_usua p;
    int matricula;
    int campo;
    int continuar;
    int resp;

    do
    {
        tela();
        tela_usuarios();
        gotoxy(20, 3);
        printf("ALTERAR USUARIO");
        gotoxy(8, 23);
        printf("Digite a matricula do usuario que deseja alterar: ");
        scanf("%d", &matricula);

        if (L->primeiro == NULL)
        {
            gotoxy(8, 23);
            printf("Nenhum usuario cadastrado");
            getch();
        }

        p = L->primeiro;
        while (p != NULL && p->conteudos.matricula != matricula)
        {
            p = p->proximo;
        }
        if (p == NULL)
        {
            gotoxy(8, 23);
            printf("Usuario não encontrado!");
            getch();
        }
        else
        {
            do
            {
                tela();
                tela_usuarios();
                gotoxy(20, 3);
                printf("ALTERAR USUARIO");
                gotoxy(38, 7);
                printf("%d", p->conteudos.matricula);
                gotoxy(8, 23);
                printf("Qual campo deseja alterar: ");
                scanf("%d", &campo);

                gotoxy(8, 23);
                printf("Digite o novo valor:            ");

                switch (campo)
                {
                case 2:
                    gotoxy(38, 8);
                    fflush(stdin);
                    fgets(p->conteudos.nome, sizeof(usuario->nome), stdin);
                    break;
                case 3:
                    gotoxy(38, 9);
                    fflush(stdin);
                    fgets(p->conteudos.endereco, sizeof(usuario->endereco), stdin);
                    break;
                case 4:
                    gotoxy(38, 10);
                    fflush(stdin);
                    fgets(p->conteudos.telefone, sizeof(usuario->telefone), stdin);
                    break;
                case 5:
                    gotoxy(38, 11);
                    fflush(stdin);
                    fgets(p->conteudos.email, sizeof(usuario->email), stdin);
                    break;
                case 6:
                    gotoxy(38, 12);
                    fflush(stdin);
                    fgets(p->conteudos.dt_nascimento, sizeof(usuario->dt_nascimento), stdin);
                    break;
                case 7:
                    gotoxy(38, 13);
                    fflush(stdin);
                    fgets(p->conteudos.dt_cadastro, sizeof(usuario->dt_cadastro), stdin);
                    break;    
                case 8:
                    gotoxy(38, 14);
                        scanf("%d", &p->conteudos.status);
                        break;
                default:
                    gotoxy(8, 23);
                    printf("Opcao invalida.                   ");
                    break;
                }
                gotoxy(8, 23);
                printf("Deseja alterar outro campo? (1-Sim/2-Nao): ");
                scanf("%d", &continuar);
            } while (continuar == 1);
            gotoxy(8, 23);
            printf("Alteracoes salvas.                            ");
            getch();
        }

        tela();
        tela_usuarios();
        gotoxy(20, 3);
        printf("ALTERAR USUARIO");
        gotoxy(8, 23);
        printf("Deseja alterar outro usuario? (1-Sim/2-Nao): ");
        scanf("%d", &resp);
        
    } while (resp == 1);
}
