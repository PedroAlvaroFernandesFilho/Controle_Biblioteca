/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 18/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que chama as ordenações e o menu geral
*/

#include "funcoes.h"
void consultar_lista_livro(tipolista_livro *li, int opc)
{
    int i;
    int linha;
    tipoapontador_livro p;
    if (li->primeiro == NULL)
    {
        gotoxy(8, 23);
        printf("Nenhum livro cadastrado.");
        getch();
    }
    if (opc == 2)
    {
        ordenar_codigo_livro(li);
        gotoxy(20, 03);
        printf("LISTA DE LIVROS - ORDENADA POR CODIGO");
    }
    else if(opc == 3)
    {
        ordenar_nome_livro(li);
        gotoxy(20, 03);
        printf("LISTA DE LIVRO - ORDENADA POR ALFABETO");
    }
    

    tela();
    gotoxy(2, 5);
    printf("CD  Titulo                   Autor          Editora     | Ano Publicacao   Stat");
    gotoxy(2, 6);
    printf("--  -----------------------  -------------  ----------- | ------------   | ----");

    p = li->primeiro;
    linha = 7;
    for (i = 7; p != NULL; i++)
    {
        {
            gotoxy(2, i);
            printf("%d", p->conteudos.id_livro);
            gotoxy(6, i);
            printf("%s", p->conteudos.titulo);
            gotoxy(34, i);
            printf("%s", p->conteudos.autor);
            gotoxy(56, i);
            printf("%s", p->conteudos.editora);
            gotoxy(70, i);
            printf("%s", p->conteudos.ano_publicacao);
            gotoxy(76, i);
            printf("%d", p->conteudos.status);

            p = p->proximo;
        }
    }
    getch();
}