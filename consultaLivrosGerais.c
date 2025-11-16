/*
Autor....: Pedro Alvaro Fernandes Filho
Data.....: 16/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Consultar fichario geral de livros
*/

#include "funcoes.h"

void consulta_livros_geral(tipolista_livro *L){

    tipoapontador_livro p;
    int linha;

    if (L->primeiro == NULL)
    {
        gotoxy(8, 23);
        printf("Nenhum livro cadastrado.");
        getch();
        return;
    }

    tela();
    gotoxy(2, 5);
    printf("ID  Titulo                        Autor                     Ano   Status");
    gotoxy(2, 6);
    printf("--  ----------------------------  ------------------------  ----  ------");

    p = L->primeiro;
    linha = 7;

    while (p != NULL && linha < 22)
    {
        gotoxy(2, linha);
        printf("%d", p->conteudos.id_livro);
        gotoxy(6, linha);
        printf("%s", p->conteudos.titulo);
        gotoxy(38, linha);
        printf("%s", p->conteudos.autor);
        gotoxy(62, linha);
        printf("%d", p->conteudos.ano_publicacao);
        gotoxy(70, linha);
        printf("%d", p->conteudos.status);

        p = p->proximo;
        linha = linha + 1;
    }

    getch();
}
