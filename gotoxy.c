/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 15/10/2025
Membros..: Autor 1: 269554-2024 | Autor 2: 291150-2025
objetivo.: Desenvolver a tela inicial do programa, onde poderá ser selecionado duas vertentes (Usuario e Publicações)
*/

#include "funcoes.h"

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}