/*
Autor....: Pedro Vinícius Souza Batista / Pedro Alvaro Fernandes Filho (pequenas correcoes)
Data.....: 05/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que insere em determinado local da lista chamando as outras funcoes
*/

#include "funcoes.h"

void insereLivroLista(tipolista_livro *li, reg_livros *Livros, int opc){

    int posicao;
    int resp;
    tipoapontador_livro pos;

    do
    {
        do
        {
            tela();
            tela_Livro();

            gotoxy(8, 23);
            printf("                                        ");
            gotoxy(8, 23);
            printf("Informe o codigo do livro: ");
            gotoxy(41, 7);
            scanf("%d", &Livros->id_livro);
            getchar();

            pos = pesquisa_livro(li, Livros->id_livro);
            if (pos != NULL)
            {
                gotoxy(8, 23);
                printf("                                        ");
                gotoxy(8, 23);
                printf("ID do livro ja existe.");
                getch();
            }

        } while (pos != NULL);

        gotoxy(41, 8);
        fgets(Livros->titulo, sizeof(Livros->titulo), stdin);
        gotoxy(41, 9);
        fgets(Livros->autor, sizeof(Livros->autor), stdin);
        gotoxy(41, 10);
        fgets(Livros->editora, sizeof(Livros->editora), stdin);
        gotoxy(41, 11);
        fgets(Livros->ano_publicacao, sizeof(Livros->ano_publicacao), stdin);
        gotoxy(41, 12);
        scanf("%d", &Livros->status);

        gotoxy(8, 23);
        printf("                                        ");
        gotoxy(8, 23);
        printf("Deseja salvar? (1-Sim/2-Nao): ");
        scanf("%d", &resp);

        if (resp == 1)
        {
            gotoxy(8, 23);
            printf("                                        ");
            gotoxy(8, 23);
            printf("Como deseja salvar? (1-Inicio/2-Fim/3-Posicao): ");
            scanf("%d", &opc);

            if (opc == 1)
            {
                cadastroLivroinicio(li, *Livros);
            }
            else if (opc == 2)
            {
                cadastroLivroFinal(li, *Livros);
            }
            else if (opc == 3)
            {
                gotoxy(8, 23);
                printf("                                        ");
                gotoxy(8, 23);
                printf("Qual posicao deseja cadastrar? ");
                scanf("%d", &posicao);
                cadastroLivroPosicao(li, *Livros, posicao);
            }
        }

        gotoxy(8, 23);
        printf("                                        ");
        gotoxy(8, 23);
        printf("Deseja cadastrar outro livro? (1-Sim/2-Nao): ");
        scanf("%d", &resp);

    } while (resp == 1);
}
