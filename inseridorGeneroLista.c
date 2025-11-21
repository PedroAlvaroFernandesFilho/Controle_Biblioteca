/*
Autor....: Pedro Alvaro Fernandes Filho 
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Inserir generos na lista
*/

#include "funcoes.h"

void InsereGeneroLista(tipolista_genero *g, reg_generos *genero, int opc){

    int posicao;
    int resp;
    tipoapontador_genero pos;

    do
    {
        do
        {
            tela();
            tela_genero();

            gotoxy(8, 23);
            printf("                                        ");
            gotoxy(8, 23);
            printf("Informe o codigo do genero: ");
            gotoxy(41, 7);
            scanf("%d", &genero->id_genero);
            getchar();

            pos = pesquisa_genero(g, genero->id_genero);

            if (pos != NULL)
            {
                gotoxy(8, 23);
                printf("                                        ");
                gotoxy(8, 23);
                printf("Codigo de genero ja existe.");
                getch();
            }

        } while (pos != NULL);

        gotoxy(41, 8);
        fgets(genero->ds_genero, sizeof(genero->ds_genero), stdin);
        gotoxy(41, 9);
        scanf("%d", &genero->status);

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
                cadastroGeneroInicio(g, *genero);
            }
            else if (opc == 2)
            {
                cadastroGeneroFinal(g, *genero);
            }
            else if (opc == 3)
            {
                gotoxy(8, 23);
                printf("                                        ");
                gotoxy(8, 23);
                printf("Qual posicao deseja cadastrar? ");
                scanf("%d", &posicao);
                cadastroGeneroPosicao(g, *genero, posicao);
            }
        }

        gotoxy(8, 23);
        printf("                                        ");
        gotoxy(8, 23);
        printf("Deseja cadastrar outro genero? (1-Sim/2-Nao): ");
        scanf("%d", &resp);

    } while (resp == 1);
}
