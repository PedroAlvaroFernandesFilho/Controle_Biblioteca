/*
Autor....: Pedro Vinícius Souza Batista
Data.....: 18/11/2025
Membros..: Autor 1: 269554-2024 | 
           Autor 2: 291150-2025 |
objetivo.: funcao que de switch que chama as outras funcoes
*/

#include "funcoes.h"

void funcaoSwitchMovi(TipoLista_usua *L, tipolista_livro *li)
{
    int opc;

    do{
        tela_movimentacao();
        gotoxy(15, 23);
        scanf("%d", &opc);
        
        switch (opc)
        {
        case 1:
            emprestimo(L, li);
            break;
        case 2:
            devolucao(L, li); 
            break;
        }
    }while(opc != 3);
}
