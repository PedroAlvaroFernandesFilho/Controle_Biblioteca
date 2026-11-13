/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que insere em determinado local da lista chamando as outras funcoes
*/

#include "funcoes.h"
void insere_usua_lista(TipoLista_usua *L, reg_usuario *usuario, int opc){

    int posicao;
    int resp = 0;
    TipoApontador_usua pos;

    do
    {
        resp = 0;
        do
        {
            tela_usuarios();
            gotoxy(8, 23);
            printf("Digite 0 para Sair");
            gotoxy(41, 7);
            scanf("%d", &usuario->matricula);
            pos = pesquisa(L, usuario->matricula);
            if (pos != NULL)
            {
                gotoxy(8, 23);
                printf("%70s", ""); // limpa a linha de mensagem
                gotoxy(8, 23);
                printf("Codigo ja existe.  ");
                getch();
            }
        } while ((pos != NULL) && (usuario->matricula != 0));

        if (usuario->matricula != 0)
        {
            gotoxy(41, 8);
            fflush(stdin);
            fgets(usuario->nome, sizeof(usuario->nome), stdin);
            gotoxy(41, 9);
            fflush(stdin);
            fgets(usuario->endereco, sizeof(usuario->endereco), stdin);
            gotoxy(41, 10);
            fflush(stdin);
            fgets(usuario->telefone, sizeof(usuario->telefone), stdin);
            gotoxy(41, 11);
            fflush(stdin);
            fgets(usuario->email, sizeof(usuario->email), stdin);
            gotoxy(41, 12);
            fflush(stdin);
            fgets(usuario->dt_nascimento, sizeof(usuario->dt_nascimento), stdin);
            gotoxy(41, 13);
            fflush(stdin);
            fgets(usuario->dt_cadastro, sizeof(usuario->dt_cadastro), stdin);
            gotoxy(41, 14);
            scanf("%d", &usuario->status);
            

            gotoxy(8, 23);
            printf("%70s", ""); // limpa a linha de mensagem
            gotoxy(8, 23);
            printf("Deseja salvar? (1-Sim/2-Nao): ");
            scanf("%d", &resp);
            if (resp == 1)
            {
                gotoxy(8, 23);
                printf("%70s", ""); // limpa a linha de mensagem
                gotoxy(8, 23);
                printf("Como deseja salvar? (1-Inicio/2-Fim/3-posicao): ");
                scanf("%d", &opc);
                if (opc == 1)
                {
                    inserir_usua_inicio(L, *usuario);
                }
                else if (opc == 2)
                {
                    inserir_usua_fim(L, *usuario);
                }
                else if (opc == 3)
                {
                    gotoxy(8, 23);
                    printf("%70s", ""); // limpa a linha de mensagem
                    gotoxy(8, 23);
                    printf("Qual posicao deseja cadastrar? ");
                    scanf("%d", &posicao);
                    inserir_usua_posicao(L, *usuario, posicao);
                }
            }
            gotoxy(8, 23);
            printf("%70s", ""); // limpa a linha de mensagem
            gotoxy(8, 23);
            printf("Deseja inserir outro usuario? (1-Sim/2-Nao): ");
            scanf("%d", &resp);
        }
    } while (resp == 1);
}