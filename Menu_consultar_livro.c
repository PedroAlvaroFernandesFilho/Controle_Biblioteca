/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que chama o menu de consultas
*/

#include "funcoes.h"
void menu_consultar_livro(tipolista_livro *li, reg_livros *livro){
    
    int opc;

    do
    {
        tela();
        gotoxy(20, 03);
        printf("MENU CONSULTAR LIVRO");
        gotoxy(20, 8);
        printf("1 - Consultar Todos os Livros");
        gotoxy(20, 10);
        printf("2 - Consultar em Ordem de Codigo");
        gotoxy(20, 12);
        printf("3 - Consultar em Ordem Alfabetica");
        gotoxy(20, 16);
        printf("4 - Retornar ao Menu Principal");
        gotoxy(8, 23);
        printf("Digite sua Opcao: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            consulta_livros_geral(li);
            break;
        case 2:
            consultar_lista_livro(li, 2);
            break;
        case 3:
            consultar_lista_livro(li, 3);
            break;
        }
    } while (opc != 4);
}