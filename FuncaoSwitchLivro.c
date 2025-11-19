/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 18/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: funcao que de switch que chama as outras funcoes
*/

#include "funcoes.h"

void funcaoSwitchLivro(){

    int opc;

    tela_Livro();
    gotoxy(08,23);
    printf("MSG.: ");
    scanf("%d", &opc);

    do{
        switch (opc)
        {
        case 1:
            insereLivroLista();
            break;
        case 2:
            menu_consultar_livro(); 
            break;
        case 3:
            altera_Livro();
            break;
        case 4:
            removeLivroPosicao();
            break;
        }

    }while(opc != 5)

}