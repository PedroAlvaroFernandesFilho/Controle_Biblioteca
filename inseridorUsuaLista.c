/*
Autor....: Pedro Vinícius Souza Batista / Pedro Alvaro Fernandes Filho (pequenas correcoes)
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que insere em determinado local da lista chamando as outras funcoes
*/

#include "funcoes.h"

void InsereUsuaLista(TipoLista_usua *L, reg_usuario *usuario, int opc){

    int posicao;
    int resp;
    TipoApontador_usua pos;

    do
    {
        do
        {
            tela();
            tela_usuarios();

            gotoxy(8, 23);
            printf("                                        ");
            gotoxy(8, 23);
            printf("Informe a matricula do usuario: ");
            gotoxy(41, 7);
            scanf("%d", &usuario->matricula);
            getchar();

            pos = pesquisa_usuario(L, usuario->matricula);
            if (pos != NULL)
            {
                gotoxy(8, 23);
                printf("                                        ");
                gotoxy(8, 23);
                printf("Matricula ja existe.");
                getch();
            }

        } while (pos != NULL);

        gotoxy(41, 8);
        fgets(usuario->nome, sizeof(usuario->nome), stdin);
        gotoxy(41, 9);
        fgets(usuario->endereco, sizeof(usuario->endereco), stdin);
        gotoxy(41, 10);
        fgets(usuario->telefone, sizeof(usuario->telefone), stdin);
        gotoxy(41, 11);
        fgets(usuario->email, sizeof(usuario->email), stdin);
        gotoxy(41, 12);
        fgets(usuario->dt_nascimento, sizeof(usuario->dt_nascimento), stdin);
        gotoxy(41, 13);
        fgets(usuario->dt_cadastro, sizeof(usuario->dt_cadastro), stdin);
        gotoxy(41, 14);
        scanf("%d", &usuario->status);

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
                CadastroUsuainicio(L, *usuario);
            }
            else if (opc == 2)
            {
                CadastroUsuaFinal(L, *usuario);
            }
            else if (opc == 3)
            {
                gotoxy(8, 23);
                printf("                                        ");
                gotoxy(8, 23);
                printf("Qual posicao deseja cadastrar? ");
                scanf("%d", &posicao);
                CadastroUsuaPosicao(L, *usuario, posicao);
            }
        }

        gotoxy(8, 23);
        printf("                                        ");
        gotoxy(8, 23);
        printf("Deseja inserir outro usuario? (1-Sim/2-Nao): ");
        scanf("%d", &resp);

    } while (resp == 1);
}
