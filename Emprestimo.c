/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Realizar emprestimo de publicacao
*/

#include "funcoes.h"

void emprestimo(TipoLista_usua *L, tipolista_livro *li){

    int id;
    int matricula;
    char resp;
    TipoApontador_usua pu;
    tipoapontador_livro pl;

    tela();
    gotoxy(25, 5);
    printf("EMPRESTIMO DE PUBLICACAO");

    gotoxy(25, 8);
    printf("Codigo do livro: ");
    scanf("%d", &id);

    pl = pesquisa_livro(li, id);
    if (pl == NULL)
    {
        gotoxy(8, 23);
        printf("Livro nao encontrado.");
        getch();
        return;
    }

    if (pl->conteudos.status != 0)
    {
        gotoxy(8, 23);
        printf("Livro nao disponivel para emprestimo.");
        getch();
        return;
    }

    gotoxy(25, 9);
    printf("Matricula do usuario: ");
    scanf("%d", &matricula);

    pu = pesquisa_usuario(L, matricula);
    if (pu == NULL)
    {
        gotoxy(8, 23);
        printf("Usuario nao encontrado.");
        getch();
        return;
    }

    if (pu->conteudos.status != 0)
    {
        gotoxy(8, 23);
        printf("Usuario inativo.");
        getch();
        return;
    }

    gotoxy(25, 11);
    printf("Confirma emprestimo (S/N)? ");
    fflush(stdin);
    scanf(" %c", &resp);

    if (resp == 'S' || resp == 's')
    {
        pl->conteudos.status = 1;
        pl->conteudos.id_usuario = pu->conteudos.matricula;
        pu->conteudos.qt_emprestimos = pu->conteudos.qt_emprestimos + 1;

        gotoxy(8, 23);
        printf("Emprestimo realizado com sucesso.");
        getch();
    }
}
