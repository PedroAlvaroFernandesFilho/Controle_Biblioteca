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
        printf("2 - Consulta");

        gotoxy(25, 10);
        printf("3 - Alteracao");

        gotoxy(25, 11);
        printf("4 - Exclusao");

        gotoxy(25, 12);
        printf("5 - Retornar");

        gotoxy(8, 23);
        printf("Opcao: ");
        gotoxy(15, 23);
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            insereLivroLista(L, &livro, 0);
            break;

        case 2:
            menu_consultar_livro(L, &livro);
            break;

        case 3:
            altera_livro(L);
            break;

        case 4:
            tela();

            gotoxy(25, 5);
            printf("EXCLUSAO DE LIVROS");

            gotoxy(25, 8);
            printf("1 - Exclusao no inicio");

            gotoxy(25, 9);
            printf("2 - Exclusao no fim");

            gotoxy(25, 10);
            printf("3 - Exclusao por posicao");

            gotoxy(25, 11);
            printf("4 - Retornar");

            gotoxy(8, 23);
            printf("Opcao: ");
            gotoxy(15, 23);
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
            break;
        }

    } while (opc != 5);
}
