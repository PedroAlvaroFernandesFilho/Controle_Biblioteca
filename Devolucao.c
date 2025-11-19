/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Realizar devolucao de publicacao
*/

#include "funcoes.h"

void devolucao(TipoLista_usua *LU, tipolista_livro *LL){

    int id;
    char resp;
    tipoapontador_livro pl;
    TipoApontador_usua pu;

    tela();
    gotoxy(25, 5);
    printf("DEVOLUCAO DE PUBLICACAO");

    gotoxy(25, 8);
    printf("Codigo do livro: ");
    scanf("%d", &id);

    pl = busca_livro(LL, id);
    if (pl == NULL)
    {
        gotoxy(8, 23);
        printf("Livro nao encontrado.");
        getch();
        return;
    }

    if (pl->conteudos.status != 1)
    {
        gotoxy(8, 23);
        printf("Livro nao esta emprestado.");
        getch();
        return;
    }

    pu = busca_usuario(LU, pl->conteudos.id_usuario);

    gotoxy(25, 10);
    printf("Confirma devolucao (S/N)? ");
    fflush(stdin);
    scanf(" %c", &resp);

    if (resp == 'S' || resp == 's')
    {
        pl->conteudos.status = 0;
        pl->conteudos.id_usuario = 0;

        if (pu != NULL && pu->conteudos.qt_emprestimos > 0)
        {
            pu->conteudos.qt_emprestimos = pu->conteudos.qt_emprestimos - 1;
        }

        gotoxy(8, 23);
        printf("Devolucao registrada com sucesso.");
        getch();
    }
}
