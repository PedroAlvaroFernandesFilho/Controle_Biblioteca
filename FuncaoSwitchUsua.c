/*
Autor....: Pedro Vinícius Souza Batista / Pedro Alvaro Fernandes Filho (pequenas correcoes)
Data.....: 18/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: funcao que de switch que chama as outras funcoes
*/

#include "funcoes.h"

void funcaoSwitchUsua(TipoLista_usua *L)
{
    int opc;
    reg_usuario usuario;

    do {
        tela_Menu_Usuarios();
        gotoxy(15,23);
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            InsereUsuaLista(L, &usuario, opc);
            break;
        case 2:
            menu_consultar(L, &usuario); 
            break;
        case 3:
            altera_usuario(L, &usuario);
            break;
        case 4:
            removeUsuaPosicao(L);
            break;
        }
    } while (opc != 5);
}
