/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 05/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que insere em determinado local da lista chamando as outras funcoes
*/

#include "funcoes.h"
void insereLivroLista(tipolista_livro *L, reg_livros *Livros, int opc){

    int posicao;
    int resp;
    tipoapontador_livro pos;

    do
    {
        do
        {
            tela();
            tela_livro();
            gotoxy(8, 23);
            printf("Digite 0 para Sair");
            gotoxy(38, 7);
            scanf("%d", &Livros-> id_livro);
            pos = pesquisa(L, Livros->id_livro);
            if (pos != NULL)
            {
                gotoxy(8, 23);
                printf("ID do livro ja existe.  ");
                getch();
            }
        } while ((pos != NULL) && (Livros->id_livro != 0));

        if (Livros->id_livro != 0)
        {
            gotoxy(38, 8);
            fflush(stdin);
            fgets(Livros->titulo, sizeof(Livros->titulo), stdin);
            gotoxy(38, 9);
            fflush(stdin);
            fgets(Livros->autor, sizeof(Livros->autor), stdin);
            gotoxy(38, 10);
            fflush(stdin);
            fgets(Livros->editora, sizeof(Livros->editora), stdin);
            gotoxy(38, 11);
            fflush(stdin);
            fgets(Livros->ano_publicacao, sizeof(Livros->ano_publicacao), stdin);
            gotoxy(38,12);
            scanf("%d", Livros->status);
            

            gotoxy(8, 23);
            printf("Deseja salvar? (1-Sim/2-Nao): ");
            scanf("%d", &resp);
            if (resp == 1)
            {
                gotoxy(8, 23);
                printf("Como deseja salvar? (1-Inicio/2-Fim/3-posicao): ");
                scanf("%d", &opc);
                if (opc == 1)
                {
                    cadastroLivroinicio(L, *Livros);
                }
                else if (opc == 2)
                {
                    cadastroLivroFinal(L, *Livros);
                }
                else if (opc == 3)
                {
                    gotoxy(8, 23);
                    printf("Qual posicao deseja cadastrar? ");
                    scanf("%d", &posicao);
                    cadastroLivroPosicao(L, *Livros, posicao);
                }
            }
            gotoxy(8, 23);
            printf("Deseja cadastrar outro livro? (1-Sim/2-Nao): ");
            scanf("%d", &resp);
        }
    } while (resp == 1);
}