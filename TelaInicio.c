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
    gotoxy();
    printf("1 - Menu de Usuarios");
    
    gotoxy();
    printf("2 - Menu de Livros");

    gotoxy();
    printf("3 - Menu de Generos");

    gotoxy();
    printf("4 - Menu de Movimentacao");

    gotoxy();
    printf("5 - Menu de Relatorios");

    gotoxy();
    printf("6 - Finalizar");
}