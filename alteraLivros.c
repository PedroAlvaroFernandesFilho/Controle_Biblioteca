/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 15/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Altera dados de um livro
*/

#include "funcoes.h"

void altera_livro(tipolista_livro *L){

    tipoapontador_livro p;
    int id;
    int campo;
    int continuar;
    int resp;

    do
    {
        tela();
        tela_livro();
        gotoxy(20, 3);
        printf("ALTERAR LIVRO");
        gotoxy(8, 23);
        printf("Digite o codigo do livro que deseja alterar: ");
        scanf("%d", &id);

        if (L->primeiro == NULL)
        {
            gotoxy(8, 23);
            printf("Nenhum livro cadastrado.");
            getch();
        }

        p = L->primeiro;
        while (p != NULL && p->conteudos.id_livro != id)
        {
            p = p->proximo;
        }

        if (p == NULL)
        {
            gotoxy(8, 23);
            printf("Livro nao encontrado!");
            getch();
        }
        else
        {
            do
            {
                tela();
                tela_livro();
                gotoxy(20, 3);
                printf("ALTERAR LIVRO");
                gotoxy(38, 7);
                printf("%d", p->conteudos.id_livro);
                gotoxy(8, 23);
                printf("Qual campo deseja alterar: ");
                scanf("%d", &campo);

                gotoxy(8, 23);
                printf("Digite o novo valor:            ");

                if (campo == 2)
                {
                    gotoxy(38, 8);
                    fflush(stdin);
                    fgets(p->conteudos.titulo, sizeof(p->conteudos.titulo), stdin);
                }
                else if (campo == 3)
                {
                    gotoxy(38, 9);
                    fflush(stdin);
                    fgets(p->conteudos.autor, sizeof(p->conteudos.autor), stdin);
                }
                else if (campo == 4)
                {
                    gotoxy(38, 10);
                    fflush(stdin);
                    fgets(p->conteudos.editora, sizeof(p->conteudos.editora), stdin);
                }
                else if (campo == 5)
                {
                    gotoxy(38, 11);
                    scanf("%d", &p->conteudos.ano_publicacao);
                }
                else if (campo == 6)
                {
                    gotoxy(38, 12);
                    scanf("%d", &p->conteudos.status);
                }
                else
                {
                    gotoxy(8, 23);
                    printf("Opcao invalida.                   ");
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
        tela_livro();
        gotoxy(20, 3);
        printf("ALTERAR LIVRO");
        gotoxy(8, 23);
        printf("Deseja alterar outro livro? (1-Sim/2-Nao): ");
        scanf("%d", &resp);

    } while (resp == 1);
}
