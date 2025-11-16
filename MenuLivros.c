/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Menu de livros
*/

#include "funcoes.h"

void menu_livros(tipolista_livro *L){

    int opc;
    int opExc;
    reg_livros livro;

    do
    {
        tela();
        gotoxy(25, 5);
        printf("MENU DE LIVROS");

        gotoxy(25, 8);
        printf("1 - Inclusao");

        gotoxy(25, 9);
        printf("2 - Consulta geral");

        gotoxy(25, 10);
        printf("3 - Alteracao");

        gotoxy(25, 11);
        printf("4 - Exclusao");

        gotoxy(25, 12);
        printf("5 - Retornar");

        gotoxy(25, 15);
        printf("Opcao: ");
        scanf("%d", &opc);

        if (opc == 1)
        {
            insereLivroLista(L, &livro, 0);
        }
        else if (opc == 2)
        {
            consulta_livros_geral(L);
        }
        else if (opc == 3)
        {
            altera_livro(L);
        }
        else if (opc == 4)
        {
            tela();
            gotoxy(25, 7);
            printf("EXCLUSAO DE LIVROS");
            gotoxy(25, 9);
            printf("1 - Excluir no inicio");
            gotoxy(25, 10);
            printf("2 - Excluir no fim");
            gotoxy(25, 11);
            printf("3 - Excluir por posicao");
            gotoxy(25, 13);
            printf("Opcao: ");
            scanf("%d", &opExc);

            if (opExc == 1)
            {
                removeLivroInicio(L);
            }
            else if (opExc == 2)
            {
                removeLivroFim(L);
            }
            else if (opExc == 3)
            {
                removeLivroPosicao(L);
            }
        }

    } while (opc != 5);
}
