/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 18/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: funcao que de switch que chama as outras funcoes
*/

#include "funcoes.h"

void funcaoSwitchGenero(tipolista_genero *g){

    reg_generos genero;
    int opc;

    do{
        tela();
        gotoxy(25, 5);
        printf("MENU DE GENEROS");

        gotoxy(25, 8);
        printf("1 - Inclusao");

        gotoxy(25, 9);
        printf("2 - Consulta / Ordenacao");

        gotoxy(25, 10);
        printf("3 - Retornar");

        gotoxy(8, 23);
        printf("Opcao: ");
        gotoxy(15, 23);
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            InsereGeneroLista(g, &genero, opc);
            break;
        case 2:
            consultar_lista_genero(g, opc); 
            break;
        }
    }while(opc != 3);
}
