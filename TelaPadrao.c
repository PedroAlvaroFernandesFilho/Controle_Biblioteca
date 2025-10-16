/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 15/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Desenvolver a tela inicial do programa, onde poderá ser selecionado duas vertentes (Usuario e Publicações)
*/
#include "funcoes.h"
void tela()
{
    int l;
    system("color 0a");
    system("cls");

    gotoxy(01, 01);
    printf("+=============================================================================+");
    gotoxy(03, 02);
    printf("UNICV");
    gotoxy(61, 02);
    printf("Estrutura de Dados ");

    gotoxy(01, 04);
    printf("+=============================================================================+");
    for (l = 5; l < 24; l++)
    {
        gotoxy(01, l);
        printf("|");
        gotoxy(79, l);
        printf("|");
    }
    gotoxy(01, 22);
    printf("+=============================================================================+");
    gotoxy(02, 23);
    printf("MSG.:");
    gotoxy(01, 24);
    printf("+=============================================================================+");
}