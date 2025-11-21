/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 22/10/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: Funcao que chama o menu de consultas
*/

#include "funcoes.h"
void menu_consultar(TipoLista_usua *L, reg_usuario *usuario){
    
    int opc;

    do
    {
        tela();
        gotoxy(20, 03);
        printf("MENU CONSULTAR USUARIO");
        gotoxy(20, 8);
        printf("1 - Consultar Usuario Especifico");
        gotoxy(20, 10);
        printf("2 - Consultar em Ordem de Matricula");
        gotoxy(20, 12);
        printf("3 - Consultar em Ordem Alfabetica");
        gotoxy(20, 14);
        printf("4 - Retornar ao Menu Principal");
        gotoxy(8, 23);
        printf("Digite sua Opcao: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            consultaUsuaUnico(L);
            break;
        case 2:
            consultar_lista(L, 2);
            break;
        case 3:
            consultar_lista(L, 3);
            break;    
        }
    } while (opc != 4);
}