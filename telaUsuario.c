/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 15/10/2025
Membros..: Autor 1: 269554-2024 |
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a tela inicial do usuario, com as opcoes de cadastro(inicio, fim, posicao), alteracao do dado, e exclusao
*/

#include "funcoes.h"

void tela_Menu_Usuarios(){

    tela();
    gotoxy(15, 03);
    printf("MENU DE USUARIOS");

    gotoxy(20, 8);
    printf("1 - Inclusao");

    gotoxy(20, 9);
    printf("2 - Consulta");

    gotoxy(20, 10);
    printf("3 - Alteracao");

    gotoxy(20, 11);
    printf("4 - Exclusao");

    gotoxy(20, 12);
    printf("5 - retornar");


}
