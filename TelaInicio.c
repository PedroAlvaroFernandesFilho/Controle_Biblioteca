/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 15/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a tela inicial do programa
*/

#include "funcoes.h"

void telainicial()
{
    tela();

    gotoxy(28, 5);
    printf("MENU PRINCIPAL");

    gotoxy(25, 8);
    printf("1 - Menu de Usuarios");

    gotoxy(25, 9);
    printf("2 - Menu de Livros");

    gotoxy(25, 10);
    printf("3 - Menu de Generos");

    gotoxy(25, 11);
    printf("4 - Movimentacao");

    gotoxy(25, 12);
    printf("5 - Sair");

    gotoxy(8, 23);
    printf("Opcao: ");
}
