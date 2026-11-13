/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 15/10/2025
Membros..: Autor 1: 269554-2024 |
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a tela inicial do programa
*/

#include "funcoes.h"

void telainicial(){

    tela();
    gotoxy(15, 03);
    printf("MENU PRINCIPAL");

    gotoxy(20, 8);
    printf("1 - Menu de Usuarios");

    gotoxy(20, 9);
    printf("2 - Menu de Livros");

    gotoxy(20, 10);
    printf("3 - Menu de Generos");

    gotoxy(20, 11);
    printf("4 - Menu de Movimentacao");

    gotoxy(20, 12);
    printf("5 - Menu de Relatorios");

    gotoxy(20, 13);
    printf("6 - Finalizar");
}
